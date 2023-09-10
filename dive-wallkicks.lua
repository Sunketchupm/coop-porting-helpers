---@param m MarioState
function on_set_mario_action(m)
    if m.playerIndex ~= 0 then return end

    if (m.action == ACT_BACKWARD_AIR_KB or m.action == ACT_SOFT_BONK) and m.prevAction ~= ACT_LEDGE_GRAB then
        m.prevAction = ACT_AIR_HIT_WALL
        m.wallKickTimer = 5
    end
end

hook_event(HOOK_ON_SET_MARIO_ACTION, on_set_mario_action)
