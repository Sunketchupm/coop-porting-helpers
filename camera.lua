camera_set_use_course_specific_settings(0)
camera_set_romhack_override(RCO_ALL)
rom_hack_cam_set_collisions(0)
camera_romhack_allow_centering(0)

hook_event(HOOK_MARIO_UPDATE,
function (m)
    if m.playerIndex ~= 0 then return end
    camera_set_romhack_override((m.action == ACT_FLYING or m.action & ACT_GROUP_MASK == ACT_GROUP_SUBMERGED) and RCO_NONE or RCO_ALL)
end)