import os
import shutil
import subprocess
import re
import sys
import fileinput

# Paths
INITIAL_DIR = os.getcwd()
SKYBOXES_DIR = os.path.join(INITIAL_DIR, "textures", "skyboxes")
OUTPUT_DIR = os.path.join(SKYBOXES_DIR, "output")
LEVELS_DIR = os.path.join(INITIAL_DIR, "levels")
LEVEL_TEXTURES_DIR = os.path.join(LEVELS_DIR, "textures")

if not os.path.exists(LEVELS_DIR) or not os.path.exists(SKYBOXES_DIR):
    print("Error: Couldn't find levels or skyboxes folder")

# Create the output directory if it doesn't exist
if not os.path.exists(OUTPUT_DIR):
    os.makedirs(OUTPUT_DIR)

skyconv_exists = False

# Moves the skyconv.exe file into the skyboxes folder.
if os.path.isfile("skyconv.exe"):
    shutil.copy("skyconv.exe", SKYBOXES_DIR)
    skyconv_exists = True

# Loop through each file in the skyboxes directory
for filename in os.listdir(SKYBOXES_DIR):
    # Check if the file starts with "SkyboxCustom"
    if filename.startswith("SkyboxCustom"):
        # Build the full path to the file
        filepath = os.path.join(SKYBOXES_DIR, filename)

        # Get the directory where the file is located
        directory = os.path.dirname(filepath)

        # Build the command to run skyconv
        command = f"cd {directory} && .\\skyconv --store-names --write-tiles output --type sky --split {filename} output"

        # Use subprocess to run the command
        result = subprocess.run(command, shell=True)

        # Check if the command was successful
        if result.returncode == 0:
            print(f"Successfully ran skyconv for {filename}")
        else:
            print(f"Error running skyconv for {filename}")
            if not skyconv_exists:
                print("Skyconv not found. Proceeding to next step...")
                break

# Change back to the initial directory
os.chdir(INITIAL_DIR)

# Move the output folder to the levels directory and rename it to "textures"
try:
    shutil.move(OUTPUT_DIR, LEVEL_TEXTURES_DIR)
    print("Successfully moved the output folder to levels/textures")
except shutil.Error:
    print("Error moving the output folder")

# Create the skybox_tiles folder within the textures folder
SKYBOX_TILES_DIR = os.path.join(LEVEL_TEXTURES_DIR, "skybox_tiles")
if not os.path.exists(SKYBOX_TILES_DIR):
    os.makedirs(SKYBOX_TILES_DIR)
    print("Successfully created the skybox_tiles folder")

# Move all .png files from the textures folder to the skybox_tiles folder
textures_path = os.path.join(INITIAL_DIR, "levels", "textures")
for filename in os.listdir(textures_path):
    if filename.endswith(".png"):
        filepath = os.path.join(textures_path, filename)
        try:
            shutil.move(filepath, os.path.join(SKYBOX_TILES_DIR, filename))
            print(f"Successfully moved {filename} to skybox_tiles")
        except shutil.Error:
            print(f"Error moving {filename} to skybox_tiles")

# Go into the textures directory
os.chdir(LEVEL_TEXTURES_DIR)

# Save the names of all files ending with .c without the extension
c_files = [os.path.splitext(f)[0] for f in os.listdir() if f.endswith(".c")]

# Return to the initial directory
os.chdir(LEVELS_DIR)

# Keep track of whether any matches were found
matches_found = False

# Walk through every subdirectory
for root, dirs, files in os.walk("."):
    # Check if the current directory has a custom.script.c file
    if "script.c" in files:
        # Open the script.c file and read its contents
        with open(os.path.join(root, "script.c"), "r") as f:
            contents = f.read()
            
            # Find all instances of SkyboxCustom[numbers]_skybox and loop through each match
            for match in re.findall(r"SkyboxCustom\d+_skybox", contents):
                # Loop through each stored name and check if there's a match
                for c_file in c_files:
                    if c_file == match:
                        # If there's a match, copy the .c file to the same directory as the custom.script.c file
                        shutil.copy(os.path.join(LEVELS_DIR, "textures", c_file + ".c"), os.path.join(root, c_file + ".c"))
                        
                        # Print that a match was found
                        print(f"Match found: {c_file}.c in {root}")
                        
                        # Set matches_found to True
                        matches_found = True

                        for dirpath, dirnames, filenames in os.walk(root):
                            if "custom.geo.inc.c" in filenames:
                                geo_file_path = os.path.join(dirpath, "custom.geo.inc.c")
                                updated_line = ""
                                new_lines = []
                                with open(geo_file_path, "r") as geo_file:
                                    for line in geo_file:
                                        if line.strip().startswith("GEO_BACKGROUND"):
                                            parts = line.strip().split()
                                            if len(parts) >= 2:
                                                parts[0] = f"GEO_BACKGROUND({match}_ptrlist,"
                                                updated_line = " ".join(parts)
                                                new_lines.append(updated_line + "\n")
                                            # Safety but should never trigger
                                            else:
                                                new_lines.append(line)
                                        else:
                                            new_lines.append(line)

                                with open(geo_file_path, "w") as geo_file:
                                    geo_file.writelines(new_lines)

                                print(f"Updated geo")
                                # Print that a match was found
                                # Set matches_found to True
                                matches_found = True
                                break  # stop searching for geo_file in subdirectories
                        break  # stop searching for c_file matches in this script file

# Remove every file (not folder) in textures
for f in os.listdir("textures"):
    if os.path.isfile(os.path.join("textures", f)):
        os.remove(os.path.join("textures", f))

# Function to comment out lines that contain a specific text
def comment_out_lines(file_path, text):
    with open(file_path, "r+") as file:
        lines = file.readlines()
        file.seek(0)
        for line in lines:
            if text in line:
                line = "// " + line
                print(f"Commented out line in {file_path}: {line.strip()}")
            file.write(line)
        file.truncate()

# Directory to start searching for files
START_DIR = "."

# Loop through all subdirectories and perform the file deletions and text replacements
for root, dirs, files in os.walk(START_DIR):
    for dir in dirs:
        dir_path = os.path.join(root, dir)
        custom_model_path = os.path.join(dir_path, "custom.model.inc.c")
        if os.path.exists(custom_model_path):
            comment_out_lines(custom_model_path, "SetOtherMode")
            comment_out_lines(custom_model_path, "gsDPSetRenderMode(0, 3356510680),")