local actions_can_bonk_can_wallkick = {
    [ACT_JUMP] = true,
    [ACT_HOLD_JUMP] = true,
    [ACT_DOUBLE_JUMP] = true,
    [ACT_TRIPLE_JUMP] = true,
    [ACT_SIDE_FLIP] = true,
    [ACT_BACKFLIP] = true,
    [ACT_LONG_JUMP] = true,
    [ACT_WALL_KICK_AIR] = true,
    [ACT_TOP_OF_POLE_JUMP] = true,
    [ACT_FREEFALL] = true,
}

local SURFACE_FIRSTY_WALL = 0x2
local SURFACE_WIDE_ANGLE_WALL = 0x6

---@param num integer
---@return integer
local function convert_s16(num)
    num = num & 0xFFFF
    return ((num >= 0x7FFF) and (num - 0x10000) or num)
end

---@param x integer
---@return integer
local function degrees_to_angle_units(x)
    return (x * 0x10000) / 360
end

local prev_speed = 0
local hit_firsty_wall = false

---@param m MarioState
function on_set_mario_action(m)
    if m.playerIndex ~= 0 then return end

    -- Forces this flag to be reset if Mario bonks but not wallkick
    if m.action & ACT_FLAG_AIR == 0 then
        hit_firsty_wall = false
    end

    local wall = m.wall
    if wall and m.action == ACT_AIR_HIT_WALL then
        if wall.type == SURFACE_FIRSTY_WALL then
            prev_speed = m.forwardVel
            hit_firsty_wall = true
        else
            hit_firsty_wall = false
        end
    end

    if hit_firsty_wall and m.action == ACT_WALL_KICK_AIR then
        if prev_speed < 20 then
            prev_speed = 20
        end
        m.forwardVel = prev_speed
        hit_firsty_wall = false
    end
end

---@param m MarioState
function wallkicks(m)
    if m.playerIndex ~= 0 then return end
    local wall = m.wall

    if not wall then return end
    if wall.type ~= SURFACE_WIDE_ANGLE_WALL then return end

    local wallDYaw = (atan2s(wall.normal.z, wall.normal.x) - (m.faceAngle.y))
    local limit = degrees_to_angle_units(91)
    wallDYaw = convert_s16(wallDYaw)

    --Standard air hit wall requirements
    if m.forwardVel >= 16 and actions_can_bonk_can_wallkick[m.action] then
        if wallDYaw >= limit or wallDYaw <= -limit then
            mario_bonk_reflection(m, 0)
            m.faceAngle.y = m.faceAngle.y + 0x8000
            m.wallKickTimer = 5
            set_mario_action(m, ACT_AIR_HIT_WALL, 0)
        end
    end
end

hook_event(HOOK_ON_SET_MARIO_ACTION, on_set_mario_action)
hook_event(HOOK_BEFORE_MARIO_UPDATE, wallkicks)