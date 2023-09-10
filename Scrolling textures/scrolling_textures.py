import os

def read_lines_from_file(file_path):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()
            return lines
    except FileNotFoundError:
        print(f"Error: File not found at {file_path}")
        return []

def write_lines_to_file(file_path, lines):
    try:
        with open(file_path, 'w') as file:
            file.writelines(lines)
    except Exception as e:
        print(f"Error writing to {file_path}: {e}")

def process_file(file_path):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()

        filtered_lines = []
        for line in lines:
            if line.strip().startswith("extern Vtx"):
                cleaned_line = line.replace("extern Vtx", "").replace("[];", "")
                cleaned_line = cleaned_line.lstrip()
                filtered_lines.append(cleaned_line)

        return filtered_lines
    except Exception as e:
        print(f"Error while processing file {file_path}: {e}")
        return []

parent_directory = os.getcwd()

# Navigate to the src/game directory
try:
    os.chdir("src/game")
except FileNotFoundError:
    print("Error: Directory 'src/game' not found")
    exit()

# Process ScrollTargets.inc.c file
file_path = "ScrollTargets.inc.c"
filtered_lines = process_file(file_path)

# Navigate back to the main directory
try:
    os.chdir(parent_directory)
except FileNotFoundError:
    print("Error: Main directory not found")
    exit()

# Write the filtered lines to start_scroll_VBs.txt
file_path = "start_scroll_VBs.txt"
write_lines_to_file(file_path, filtered_lines)

print("Found start scroll VBs")
#-----------------------------------------------------------------------
# Using the start VBs, look through every level to find it. Then list out every following VB.

def extract_function_name(line: str) -> str:
    name = ""
    for char in line:
        if char == "(":
            break
        name += char
    return name

def extract_params(line: str) -> list[str]:
    if "(" not in line:
        return None

    is_in_params = False
    params = ""
    for char in line:
        if char == ")":
            is_in_params = False
        if is_in_params:
            params += char
        if char == "(":
            is_in_params = True
    params = params.strip().split(",")
    count = 0
    for param in params:
        params[count] = param.strip()
        count += 1
    return params


### List contains 4 elements per object: VB name, VB count, is start VB, and VB offset
def find_vb_info(lines: list[str], start_vb_name: str, processed_vb: list[tuple]):
    vb_info: list[list] = []
    found_line = False
    found_start_line = False
    start_vb_line = 0
    is_immediately_past_line = False
    is_duplicate = False
    #is_valid_line = False

    vb_being_processed = start_vb_name
    offset = 0
    highest_count = 0
    line_count = 0
    for line in lines:
        line_count += 1
        line = line.strip()
        function_name = extract_function_name(line)
        # If gsSPVertex, param 0 is VB name, param 1 is count, param 2 doens't matter
        # If gsSP1Triangle or gsSP2Triangles, param 0 is offset
        params = extract_params(line)
        if params is None:
            continue
        current_vb_name = params[0]

        if function_name == "gsSPVertex" and start_vb_name == current_vb_name and not found_start_line:
            for vb_data in processed_vb:
                if start_vb_name == vb_data[0] and line_count == vb_data[1]:
                    is_duplicate = True
                    break
            if is_duplicate:
                break
            found_start_line = True
            start_vb_line = line_count

            found_line = True
            is_immediately_past_line = True
            vb_being_processed = current_vb_name
        elif (function_name == "gsSPVertex" or function_name == "gsDPSetTextureImage") and found_start_line:
            found_line = True
            is_immediately_past_line = True
            if current_vb_name != vb_being_processed:
                list_to_append = [vb_being_processed, str((highest_count + 1) - int(offset)), vb_being_processed == start_vb_name, offset]
                vb_info.append(list_to_append)
            vb_being_processed = current_vb_name

        if found_line and (function_name == "gsSP1Triangle" or function_name == "gsSP2Triangles") and is_immediately_past_line:
            offset = params[0]
            is_immediately_past_line = False

        if found_line and (function_name == "gsSP1Triangle" or function_name == "gsSP2Triangles"):
            highest_param = 0
            for param in params:
                highest_param = max([highest_param, int(param)])
            highest_count = max([highest_count, highest_param])

        if found_line and function_name == "gsDPSetTextureImage":
            processed_vb.append((start_vb_name, start_vb_line))
            found_line = False
            found_start_line = False
            is_immediately_past_line = False
            vb_being_processed = start_vb_name
            offset = 0
            highest_count = 0

    #if is_valid_line:
    #    print(vb_info)
    return vb_info

def process_vb_info(vb_info):
    lines_to_write = []
    total_count = 0

    for vb_name, count, is_start, offset in vb_info:
        line = f"({vb_name}, {offset}, {count})"
        if is_start:
            line += " START"
        lines_to_write.append(line + "\n")
        total_count += int(count)
    
    lines_to_write.append(f"COUNT:{total_count}")
    return lines_to_write

def extract_course_name(vb_name):
    underscore_indices = [pos for pos, char in enumerate(vb_name) if char == "_"]

    if len(underscore_indices) >= 2:
        extracted_part = vb_name[underscore_indices[0] + 1:underscore_indices[1]]
        if extracted_part == "castle" or extracted_part == "bowser":
            extracted_part = vb_name[underscore_indices[0] + 1:underscore_indices[2]]

    return extracted_part


os.chdir(parent_directory)

# Read lines from start_scroll_VBs.txt
start_scroll_VBs = read_lines_from_file("start_scroll_VBs.txt")

vb_info_list = []
processed_vb_list = []
for vb_name in start_scroll_VBs:
    vb_name = vb_name.strip()
    course_name = extract_course_name(vb_name)
    print(f"Processing VB: {vb_name}")
    i = 0
    while i < 8:
        model_file_path = os.path.join("levels", course_name, "areas", str(i), "custom.model.inc.c")
        try:
            with open(model_file_path, 'r') as file:
                lines = file.readlines()
                vb_info = find_vb_info(lines, vb_name, processed_vb_list)
                vb_info_list.append(vb_info)
        except FileNotFoundError:
            i = i # do nothing
        i += 1
# Return to the parent directory
os.chdir(parent_directory)

# Write the vb_info_list to VBs.txt
file_path = "VBs.txt"
lines_to_write = []
for vb_info in vb_info_list:
    lines_to_write.extend(process_vb_info(vb_info))
    lines_to_write.append("\n")  # Add a blank line between entries

write_lines_to_file(file_path, lines_to_write)

print("Processed each VB following the start scroll VBs")
#-------------------------------------------------------------------------
# Take all of these VBs and put them into a lua file

# Read lines from VBs.txt
VBs_lines = read_lines_from_file("VBs.txt")

# Process each line from VBs.txt and write to scroll_textures.lua
lines_to_write = []
for line in VBs_lines:
    if "COUNT" in line:
        count = line.split(":")[1].strip()
        if int(count) > 0:
            lines_to_write.append(f"-- Count: {count}\n\n")
        else:
            lines_to_write.append(f"-- Could not find scrolling texture with ID <id>\n\n")
    else:
        params = extract_params(line)
        if params is not None:
            name = params[0]
            offset = params[1]
            count = params[2]
            line_to_write = f"add_scroll_target(<id>, \"{name}\", {offset}, {count})"
            if "START" in line:
                line_to_write = line_to_write + " -- Start VB"
            line_to_write = line_to_write + "\n"
            lines_to_write.append(line_to_write)

# Write to scroll_textures.lua
write_lines_to_file("scroll_textures.lua", lines_to_write)

print("Wrote every VB into a lua file")
#------------------------------------------------------
# Process the IDs of each VB

# Read lines from scroll_textures.lua
scroll_lines = read_lines_from_file("scroll_textures.lua")

# Find '<id>' and replace with a counter starting from 0
counter = 0
lines_to_write = []
for line in scroll_lines:
    if "<id>" in line:
        line = line.replace("<id>", str(counter))
    lines_to_write.append(line)
    if "-- Count" in line or "scrolling" in line:
        counter += 1

# Write back to scroll_textures.lua
write_lines_to_file("scroll_textures.lua", lines_to_write)

print("Assigned every unique scrolling texture a unique ID")
#-----------------------------------------------------------
# Delete txt files

def delete_file(file_path):
    try:
        os.remove(file_path)
        print(f"File {file_path} deleted successfully.")
    except FileNotFoundError:
        print(f"Error: File {file_path} not found.")
    except Exception as e:
        print(f"Error deleting {file_path}: {e}")

# List of files to delete
files_to_delete = ["start_scroll_VBs.txt", "VBs.txt"]

# Delete each file in the list
for file in files_to_delete:
    delete_file(file)