-- The range of wallkick angles. The higher the number, the greater the range.
local degree_limit = 46

local actions_can_bonk_and_wallkick =
{
    [ACT_JUMP] = true,
    [ACT_HOLD_JUMP] = true,
    [ACT_DOUBLE_JUMP] = true,
    [ACT_TRIPLE_JUMP] = true,
    [ACT_SIDE_FLIP] = true,
    [ACT_BACKFLIP] = true,
    [ACT_LONG_JUMP] = true,
    [ACT_WALL_KICK_AIR] = true,
    [ACT_TOP_OF_POLE_JUMP] = true,
    [ACT_FREEFALL] = true
}

---@param num number
---@return number
local function convert_s16(num)
    num = num & 0xFFFF
    return ((num >= 0x7FFF) and (num - 0x10000) or num)
end

local function degrees_to_angle_units(x)
    return (x * 0x10000) / 360
end

---@param m MarioState
function before_mario_update(m)
    if m.playerIndex ~= 0 then return end
    local wall = m.wall

    if wall then
        if wall.type == SURFACE_BURNING then return end

        local wallDYaw = (atan2s(wall.normal.z, wall.normal.x) - (m.faceAngle.y))
        local limit = degrees_to_angle_units(180 - degree_limit)
        wallDYaw = convert_s16(wallDYaw)

        --Standard air hit wall requirements
        if m.forwardVel >= 16 and actions_can_bonk_and_wallkick[m.action] then
            if wallDYaw >= limit or wallDYaw <= -limit then
                mario_bonk_reflection(m, 0)
                m.faceAngle.y = m.faceAngle.y + 0x8000
                m.wallKickTimer = 5
                set_mario_action(m, ACT_AIR_HIT_WALL, 0)
            end
        end
    end
end

hook_event(HOOK_BEFORE_MARIO_UPDATE, before_mario_update)