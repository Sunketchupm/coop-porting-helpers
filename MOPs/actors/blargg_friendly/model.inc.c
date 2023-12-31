Lights1 blargg_friendly_blargg_belly_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 blargg_friendly_blargg_seat_lights = gdSPDefLights1(
	0x7F, 0x18, 0x1,
	0xFE, 0x30, 0x2, 0x28, 0x28, 0x28);

Lights1 blargg_friendly_blargg_mouth_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 blargg_friendly_blargg_eye_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 blargg_friendly_blargg_teeth_lights = gdSPDefLights1(
	0x60, 0x58, 0x4F,
	0xC0, 0xB0, 0x9E, 0x28, 0x28, 0x28);

Gfx blargg_friendly_blargg_belly_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 blargg_friendly_blargg_belly_rgba32[] = "actors/blargg_friendly/blargg_belly.rgba32";

Gfx blargg_friendly_blargg_body_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 blargg_friendly_blargg_body_rgba32[] = "actors/blargg_friendly/blargg_body.rgba32";

Gfx blargg_friendly_blargg_eyes_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 blargg_friendly_blargg_eyes_rgba32[] = "actors/blargg_friendly/blargg_eyes.rgba32";

Vtx blargg_friendly_000_offset_mesh_vtx_0[28] = {
	{{{-476, 406, 77},0, {670, 902},{0xA8, 0x49, 0x37, 0xFF}}},
	{{{141, 347, -140},0, {178, 402},{0x39, 0x62, 0xC7, 0xFF}}},
	{{{-476, 406, -74},0, {322, 902},{0xA8, 0x49, 0xC9, 0xFF}}},
	{{{141, 347, 143},0, {814, 402},{0x39, 0x62, 0x39, 0xFF}}},
	{{{254, 131, 215},0, {831, 275},{0x5F, 0xF, 0x53, 0xFF}}},
	{{{254, 131, -211},0, {161, 275},{0x5F, 0xF, 0xAD, 0xFF}}},
	{{{263, -134, 105},0, {659, 61},{0x50, 0xAC, 0x33, 0xFF}}},
	{{{263, -134, -102},0, {333, 61},{0x50, 0xAC, 0xCD, 0xFF}}},
	{{{141, 347, -140},0, {177, 105},{0x39, 0x62, 0xC7, 0xFF}}},
	{{{1, 97, -283},0, {173, 102},{0xFC, 0xF4, 0x82, 0xFF}}},
	{{{-476, 406, -74},0, {165, 107},{0xA8, 0x49, 0xC9, 0xFF}}},
	{{{254, 131, -211},0, {178, 101},{0x5F, 0xF, 0xAD, 0xFF}}},
	{{{36, -125, -136},0, {172, 98},{0xF6, 0x94, 0xBE, 0xFF}}},
	{{{263, -134, -102},0, {175, 95},{0x50, 0xAC, 0xCD, 0xFF}}},
	{{{263, -134, 105},0, {172, 92},{0x50, 0xAC, 0x33, 0xFF}}},
	{{{36, -125, 140},0, {169, 95},{0xF6, 0x94, 0x42, 0xFF}}},
	{{{36, -125, 140},0, {169, 95},{0xF6, 0x94, 0x42, 0xFF}}},
	{{{263, -134, 105},0, {172, 92},{0x50, 0xAC, 0x33, 0xFF}}},
	{{{254, 131, 215},0, {165, 89},{0x5F, 0xF, 0x53, 0xFF}}},
	{{{1, 97, 286},0, {164, 95},{0xFC, 0xF4, 0x7E, 0xFF}}},
	{{{141, 347, 143},0, {161, 90},{0x39, 0x62, 0x39, 0xFF}}},
	{{{-476, 406, 77},0, {161, 103},{0xA8, 0x49, 0x37, 0xFF}}},
	{{{-409, 172, 118},0, {164, 101},{0x9E, 0xDA, 0x47, 0xFF}}},
	{{{-409, 172, -115},0, {166, 104},{0x9E, 0xDA, 0xB9, 0xFF}}},
	{{{-476, 406, -74},0, {165, 107},{0xA8, 0x49, 0xC9, 0xFF}}},
	{{{1, 97, -283},0, {173, 102},{0xFC, 0xF4, 0x82, 0xFF}}},
	{{{-269, -50, -78},0, {168, 100},{0xBA, 0xA2, 0xD0, 0xFF}}},
	{{{-269, -50, 81},0, {167, 99},{0xBA, 0xA2, 0x30, 0xFF}}},
};

Gfx blargg_friendly_000_offset_mesh_tri_0[] = {
	gsSPVertex(blargg_friendly_000_offset_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(11, 12, 9, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(blargg_friendly_000_offset_mesh_vtx_0 + 16, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(10, 6, 7, 0),
	gsSP1Triangle(10, 11, 6, 0),
	gsSP1Triangle(11, 3, 6, 0),
	gsSPEndDisplayList(),
};Vtx blargg_friendly_000_offset_mesh_vtx_1[6] = {
	{{{1, 97, -283},0, {173, 102},{0xFC, 0xF4, 0x82, 0xFF}}},
	{{{36, -125, -136},0, {172, 98},{0xF6, 0x94, 0xBE, 0xFF}}},
	{{{-269, -50, -78},0, {168, 100},{0xBA, 0xA2, 0xD0, 0xFF}}},
	{{{36, -125, 140},0, {169, 95},{0xF6, 0x94, 0x42, 0xFF}}},
	{{{-269, -50, 81},0, {167, 99},{0xBA, 0xA2, 0x30, 0xFF}}},
	{{{1, 97, 286},0, {164, 95},{0xFC, 0xF4, 0x7E, 0xFF}}},
};

Gfx blargg_friendly_000_offset_mesh_tri_1[] = {
	gsSPVertex(blargg_friendly_000_offset_mesh_vtx_1 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSPEndDisplayList(),
};

Vtx blargg_friendly_000_offset_001_mesh_vtx_0[75] = {
	{{{90, -13, -153},0, {81, 241},{0xF3, 0x5B, 0xA8, 0xFF}}},
	{{{-12, -171, -142},0, {59, 58},{0xE, 0xE5, 0x85, 0xFF}}},
	{{{-17, -16, -178},0, {8, 198},{0xEC, 0x49, 0x9A, 0xFF}}},
	{{{95, -168, -108},0, {135, 101},{0x20, 0xBC, 0x9A, 0xFF}}},
	{{{245, -192, -173},0, {245, 166},{0xDF, 0xB9, 0x9C, 0xFF}}},
	{{{201, 65, -184},0, {125, 364},{0xD9, 0x6E, 0xCE, 0xFF}}},
	{{{417, 23, -224},0, {290, 394},{0x39, 0x4C, 0xAC, 0xFF}}},
	{{{416, -242, -136},0, {375, 194},{0x34, 0xAF, 0xAC, 0xFF}}},
	{{{543, -61, 2},0, {496, 422},{0x74, 0x34, 0x0, 0xFF}}},
	{{{492, -257, 2},0, {496, 153},{0x5F, 0xAC, 0x0, 0xFF}}},
	{{{416, -242, 139},0, {617, 194},{0x34, 0xAF, 0x54, 0xFF}}},
	{{{417, 23, 228},0, {702, 394},{0x39, 0x4C, 0x54, 0xFF}}},
	{{{245, -192, 176},0, {747, 166},{0xDF, 0xB9, 0x64, 0xFF}}},
	{{{201, 65, 187},0, {867, 364},{0xD9, 0x6E, 0x32, 0xFF}}},
	{{{90, -13, 157},0, {911, 241},{0xF3, 0x5B, 0x58, 0xFF}}},
	{{{95, -168, 111},0, {857, 101},{0x21, 0xBC, 0x66, 0xFF}}},
	{{{90, -13, 157},0, {911, 241},{0xF3, 0x5B, 0x58, 0xFF}}},
	{{{-12, -171, 146},0, {933, 58},{0xD, 0xE6, 0x7C, 0xFF}}},
	{{{95, -168, 111},0, {857, 101},{0x21, 0xBC, 0x66, 0xFF}}},
	{{{-17, -16, 181},0, {984, 198},{0xEC, 0x49, 0x66, 0xFF}}},
	{{{-17, -16, -178},0, {926, 1},{0xEC, 0x49, 0x9A, 0xFF}}},
	{{{-12, -171, -142},0, {931, 16},{0xE, 0xE5, 0x85, 0xFF}}},
	{{{-120, -174, -132},0, {944, 14},{0xB8, 0x3, 0x97, 0xFF}}},
	{{{-166, -21, 2},0, {983, 7},{0xA5, 0x58, 0x0, 0xFF}}},
	{{{-207, -177, 2},0, {958, 17},{0x81, 0xFA, 0x0, 0xFF}}},
	{{{-120, -174, 136},0, {944, 14},{0xB8, 0x3, 0x69, 0xFF}}},
	{{{-17, -16, 181},0, {926, 1},{0xEC, 0x49, 0x66, 0xFF}}},
	{{{-12, -171, 146},0, {931, 16},{0xD, 0xE6, 0x7C, 0xFF}}},
	{{{136, -166, 2},0, {916, 69},{0x1D, 0x84, 0x0, 0xFF}}},
	{{{95, -168, -108},0, {916, 39},{0x20, 0xBC, 0x9A, 0xFF}}},
	{{{245, -192, -173},0, {898, 47},{0xDF, 0xB9, 0x9C, 0xFF}}},
	{{{269, -310, 2},0, {897, 49},{0xD8, 0x87, 0x0, 0xFF}}},
	{{{269, -310, 2},0, {897, 49},{0xD8, 0x87, 0x0, 0xFF}}},
	{{{245, -192, -173},0, {898, 47},{0xDF, 0xB9, 0x9C, 0xFF}}},
	{{{416, -242, -136},0, {896, 47},{0x34, 0xAF, 0xAC, 0xFF}}},
	{{{492, -257, 2},0, {896, 48},{0x5F, 0xAC, 0x0, 0xFF}}},
	{{{416, -242, 139},0, {896, 47},{0x34, 0xAF, 0x54, 0xFF}}},
	{{{245, -192, 176},0, {898, 47},{0xDF, 0xB9, 0x64, 0xFF}}},
	{{{136, -166, 2},0, {916, 69},{0x1D, 0x84, 0x0, 0xFF}}},
	{{{95, -168, 111},0, {916, 39},{0x21, 0xBC, 0x66, 0xFF}}},
	{{{-17, -16, -178},0, {958, 14},{0xEC, 0x49, 0x9A, 0xFF}}},
	{{{-17, -16, 2},0, {942, 31},{0x2, 0x7F, 0x0, 0xFF}}},
	{{{90, -13, -153},0, {967, 27},{0xF3, 0x5B, 0xA8, 0xFF}}},
	{{{-166, -21, 2},0, {928, 17},{0xA5, 0x58, 0x0, 0xFF}}},
	{{{-17, -16, 181},0, {958, 14},{0xEC, 0x49, 0x66, 0xFF}}},
	{{{90, -13, 157},0, {967, 27},{0xF3, 0x5B, 0x58, 0xFF}}},
	{{{321, -56, 2},0, {963, 53},{0x7, 0x7F, 0x0, 0xFF}}},
	{{{201, 65, 187},0, {968, 48},{0xD9, 0x6E, 0x32, 0xFF}}},
	{{{321, -56, 2},0, {963, 53},{0x7, 0x7F, 0x0, 0xFF}}},
	{{{201, 65, 187},0, {968, 48},{0xD9, 0x6E, 0x32, 0xFF}}},
	{{{417, 23, 228},0, {968, 53},{0x39, 0x4C, 0x54, 0xFF}}},
	{{{543, -61, 2},0, {966, 56},{0x74, 0x34, 0x0, 0xFF}}},
	{{{417, 23, -224},0, {968, 53},{0x39, 0x4C, 0xAC, 0xFF}}},
	{{{201, 65, -184},0, {968, 48},{0xD9, 0x6E, 0xCE, 0xFF}}},
	{{{90, -13, -153},0, {967, 27},{0xF3, 0x5B, 0xA8, 0xFF}}},
	{{{-17, -16, 2},0, {942, 31},{0x2, 0x7F, 0x0, 0xFF}}},
	{{{-12, -171, -142},0, {947, 37},{0xE, 0xE5, 0x85, 0xFF}}},
	{{{-117, -275, -124},0, {935, 40},{0xC4, 0xBD, 0xA6, 0xFF}}},
	{{{-120, -174, -132},0, {937, 42},{0xB8, 0x3, 0x97, 0xFF}}},
	{{{-9, -300, -105},0, {933, 33},{0xFF, 0xAA, 0xA3, 0xFF}}},
	{{{50, -299, -105},0, {932, 27},{0x36, 0xB4, 0xAA, 0xFF}}},
	{{{-18, -350, 2},0, {925, 36},{0xFA, 0x81, 0xFE, 0xFF}}},
	{{{-145, -286, 2},0, {931, 42},{0xA7, 0xA6, 0x0, 0xFF}}},
	{{{-117, -275, 127},0, {935, 40},{0xC4, 0xBD, 0x5A, 0xFF}}},
	{{{-117, -275, 127},0, {935, 40},{0xC4, 0xBD, 0x5A, 0xFF}}},
	{{{-18, -350, 2},0, {925, 36},{0xFA, 0x81, 0xFE, 0xFF}}},
	{{{-9, -300, 109},0, {933, 33},{0xF0, 0xAF, 0x60, 0xFF}}},
	{{{24, -326, 77},0, {930, 30},{0xA, 0x86, 0x23, 0xFF}}},
	{{{42, -315, 111},0, {932, 27},{0x2A, 0xAB, 0x54, 0xFF}}},
	{{{-12, -171, 146},0, {947, 37},{0xD, 0xE6, 0x7C, 0xFF}}},
	{{{-120, -174, 136},0, {937, 42},{0xB8, 0x3, 0x69, 0xFF}}},
	{{{-207, -177, 2},0, {934, 45},{0x81, 0xFA, 0x0, 0xFF}}},
	{{{-145, -286, 2},0, {931, 42},{0xA7, 0xA6, 0x0, 0xFF}}},
	{{{-117, -275, -124},0, {935, 40},{0xC4, 0xBD, 0xA6, 0xFF}}},
	{{{-120, -174, -132},0, {937, 42},{0xB8, 0x3, 0x97, 0xFF}}},
};

Gfx blargg_friendly_000_offset_001_mesh_tri_0[] = {
	gsSPVertex(blargg_friendly_000_offset_001_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(blargg_friendly_000_offset_001_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(blargg_friendly_000_offset_001_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSP1Triangle(6, 0, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 9, 8, 0),
	gsSP1Triangle(11, 12, 9, 0),
	gsSP1Triangle(12, 13, 9, 0),
	gsSP1Triangle(13, 14, 9, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(blargg_friendly_000_offset_001_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSP1Triangle(6, 0, 5, 0),
	gsSP1Triangle(6, 7, 0, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 11, 8, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(9, 11, 13, 0),
	gsSP1Triangle(9, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(blargg_friendly_000_offset_001_mesh_vtx_0 + 64, 11, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(5, 0, 2, 0),
	gsSP1Triangle(5, 6, 0, 0),
	gsSP1Triangle(0, 6, 7, 0),
	gsSP1Triangle(0, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(9, 7, 10, 0),
	gsSPEndDisplayList(),
};Vtx blargg_friendly_000_offset_001_mesh_vtx_1[15] = {
	{{{50, -299, -105},0, {200, -20},{0x36, 0xB4, 0xAA, 0xFF}}},
	{{{-12, -171, -142},0, {-144, 283},{0xE, 0xE5, 0x85, 0xFF}}},
	{{{95, -168, -108},0, {147, 424},{0x20, 0xBC, 0x9A, 0xFF}}},
	{{{102, -297, 2},0, {510, 48},{0x66, 0xB5, 0xFE, 0xFF}}},
	{{{136, -166, 2},0, {512, 479},{0x1D, 0x84, 0x0, 0xFF}}},
	{{{95, -168, 111},0, {861, 421},{0x21, 0xBC, 0x66, 0xFF}}},
	{{{42, -315, 111},0, {854, 82},{0x2A, 0xAB, 0x54, 0xFF}}},
	{{{-12, -171, 146},0, {1165, 276},{0xD, 0xE6, 0x7C, 0xFF}}},
	{{{24, -326, 77},0, {766, 4},{0xA, 0x86, 0x23, 0xFF}}},
	{{{42, -324, 2},0, {528, -77},{0x34, 0x8C, 0xF9, 0xFF}}},
	{{{42, -324, 2},0, {471, -13},{0x34, 0x8C, 0xF9, 0xFF}}},
	{{{-18, -350, 2},0, {908, -9},{0xFA, 0x81, 0xFE, 0xFF}}},
	{{{50, -299, -105},0, {797, 74},{0x36, 0xB4, 0xAA, 0xFF}}},
	{{{42, -324, 2},0, {909, 45},{0x34, 0x8C, 0xF9, 0xFF}}},
	{{{24, -326, 77},0, {995, 74},{0xA, 0x86, 0x23, 0xFF}}},
};

Gfx blargg_friendly_000_offset_001_mesh_tri_1[] = {
	gsSPVertex(blargg_friendly_000_offset_001_mesh_vtx_1 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 3, 6, 0),
	gsSP1Triangle(8, 9, 3, 0),
	gsSP1Triangle(10, 0, 3, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPEndDisplayList(),
};Vtx blargg_friendly_000_offset_001_mesh_vtx_2[26] = {
	{{{460, -31, -62},0, {368, -16},{0x79, 0x23, 0x14, 0xFF}}},
	{{{400, 77, -135},0, {624, 240},{0xD, 0x4F, 0x9E, 0xFF}}},
	{{{431, 84, -84},0, {624, -16},{0x58, 0x5B, 0x4, 0xFF}}},
	{{{401, -43, -161},0, {368, 240},{0x8, 0x1B, 0x84, 0xFF}}},
	{{{372, -44, -135},0, {368, 496},{0x85, 0x6, 0xE1, 0xFF}}},
	{{{371, 76, -108},0, {624, 496},{0x96, 0x45, 0xF8, 0xFF}}},
	{{{431, -32, -36},0, {368, 752},{0xF6, 0x15, 0x7D, 0xFF}}},
	{{{402, 83, -57},0, {624, 752},{0xE1, 0x4F, 0x5E, 0xFF}}},
	{{{431, 84, -84},0, {624, 1008},{0x58, 0x5B, 0x4, 0xFF}}},
	{{{460, -31, -62},0, {368, 1008},{0x79, 0x23, 0x14, 0xFF}}},
	{{{431, 84, -84},0, {880, 240},{0x58, 0x5B, 0x4, 0xFF}}},
	{{{402, 83, -57},0, {880, 496},{0xE1, 0x4F, 0x5E, 0xFF}}},
	{{{431, -32, 39},0, {368, 752},{0xF6, 0x15, 0x83, 0xFF}}},
	{{{431, 84, 87},0, {624, 1008},{0x58, 0x5B, 0xFC, 0xFF}}},
	{{{460, -31, 66},0, {368, 1008},{0x79, 0x23, 0xEC, 0xFF}}},
	{{{402, 83, 60},0, {624, 752},{0xE1, 0x4F, 0xA2, 0xFF}}},
	{{{431, -32, 39},0, {368, 752},{0xF6, 0x15, 0x83, 0xFF}}},
	{{{371, 76, 112},0, {624, 496},{0x96, 0x45, 0x8, 0xFF}}},
	{{{402, 83, 60},0, {624, 752},{0xE1, 0x4F, 0xA2, 0xFF}}},
	{{{372, -44, 138},0, {368, 496},{0x85, 0x6, 0x1F, 0xFF}}},
	{{{400, 77, 138},0, {624, 240},{0xD, 0x4F, 0x62, 0xFF}}},
	{{{401, -43, 165},0, {368, 240},{0x8, 0x1B, 0x7C, 0xFF}}},
	{{{460, -31, 66},0, {368, -16},{0x79, 0x23, 0xEC, 0xFF}}},
	{{{431, 84, 87},0, {624, -16},{0x58, 0x5B, 0xFC, 0xFF}}},
	{{{431, 84, 87},0, {880, 240},{0x58, 0x5B, 0xFC, 0xFF}}},
	{{{402, 83, 60},0, {880, 496},{0xE1, 0x4F, 0xA2, 0xFF}}},
};

Gfx blargg_friendly_000_offset_001_mesh_tri_2[] = {
	gsSPVertex(blargg_friendly_000_offset_001_mesh_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(5, 10, 1, 0),
	gsSP1Triangle(5, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(blargg_friendly_000_offset_001_mesh_vtx_2 + 16, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(1, 4, 8, 0),
	gsSP1Triangle(1, 8, 9, 0),
	gsSPEndDisplayList(),
};

Vtx blargg_friendly_000_offset_003_mesh_vtx_0[38] = {
	{{{3, 138, -119},0, {818, 100},{0xB8, 0x4D, 0xB8, 0xFF}}},
	{{{194, 38, -146},0, {740, 300},{0xF4, 0xA3, 0xAB, 0xFF}}},
	{{{-56, -28, -119},0, {891, 317},{0xB0, 0xB8, 0xBE, 0xFF}}},
	{{{168, 173, -146},0, {741, 196},{0xD1, 0x4E, 0xA8, 0xFF}}},
	{{{320, 187, -222},0, {642, 204},{0x18, 0x45, 0x98, 0xFF}}},
	{{{346, 51, -222},0, {640, 309},{0x2C, 0xBE, 0x9D, 0xFF}}},
	{{{427, 212, 2},0, {496, 198},{0x5D, 0x56, 0x0, 0xFF}}},
	{{{451, 47, 2},0, {496, 324},{0x6A, 0xBA, 0x0, 0xFF}}},
	{{{346, 51, 225},0, {352, 309},{0x2C, 0xBE, 0x63, 0xFF}}},
	{{{320, 187, 225},0, {351, 204},{0x18, 0x45, 0x68, 0xFF}}},
	{{{194, 38, 149},0, {253, 300},{0xF4, 0xA3, 0x55, 0xFF}}},
	{{{168, 173, 149},0, {251, 196},{0xD1, 0x4E, 0x58, 0xFF}}},
	{{{3, 138, 122},0, {174, 100},{0xB8, 0x4D, 0x48, 0xFF}}},
	{{{-56, -28, 122},0, {102, 317},{0xB0, 0xB8, 0x42, 0xFF}}},
	{{{168, 173, -146},0, {628, 225},{0xD1, 0x4E, 0xA8, 0xFF}}},
	{{{3, 138, -119},0, {547, 122},{0xB8, 0x4D, 0xB8, 0xFF}}},
	{{{3, 138, 2},0, {395, 134},{0xA9, 0x5C, 0x0, 0xFF}}},
	{{{223, 225, 2},0, {451, 275},{0xEA, 0x7D, 0x0, 0xFF}}},
	{{{168, 173, 149},0, {248, 264},{0xD1, 0x4E, 0x58, 0xFF}}},
	{{{3, 138, 122},0, {244, 155},{0xB8, 0x4D, 0x48, 0xFF}}},
	{{{320, 187, 225},0, {265, 357},{0x18, 0x45, 0x68, 0xFF}}},
	{{{427, 212, 2},0, {497, 386},{0x5D, 0x56, 0x0, 0xFF}}},
	{{{320, 187, -222},0, {685, 314},{0x18, 0x45, 0x98, 0xFF}}},
	{{{3, 138, -119},0, {250, 252},{0xB8, 0x4D, 0xB8, 0xFF}}},
	{{{-56, -28, -119},0, {-16, 261},{0xB0, 0xB8, 0xBE, 0xFF}}},
	{{{-56, -28, 2},0, {33, 374},{0xA2, 0xAB, 0x0, 0xFF}}},
	{{{3, 138, 2},0, {299, 319},{0xA9, 0x5C, 0x0, 0xFF}}},
	{{{-56, -28, 122},0, {139, 479},{0xB0, 0xB8, 0x42, 0xFF}}},
	{{{3, 138, 122},0, {370, 387},{0xB8, 0x4D, 0x48, 0xFF}}},
	{{{194, 38, -146},0, {864, 26},{0xF4, 0xA3, 0xAB, 0xFF}}},
	{{{-56, -28, 2},0, {915, 0},{0xA2, 0xAB, 0x0, 0xFF}}},
	{{{-56, -28, -119},0, {864, 0},{0xB0, 0xB8, 0xBE, 0xFF}}},
	{{{246, 35, 2},0, {915, 26},{0xF, 0x82, 0x0, 0xFF}}},
	{{{346, 51, -222},0, {864, 51},{0x2C, 0xBE, 0x9D, 0xFF}}},
	{{{451, 47, 2},0, {915, 51},{0x6A, 0xBA, 0x0, 0xFF}}},
	{{{346, 51, 225},0, {966, 51},{0x2C, 0xBE, 0x63, 0xFF}}},
	{{{194, 38, 149},0, {966, 26},{0xF4, 0xA3, 0x55, 0xFF}}},
	{{{-56, -28, 122},0, {966, 0},{0xB0, 0xB8, 0x42, 0xFF}}},
};

Gfx blargg_friendly_000_offset_003_mesh_tri_0[] = {
	gsSPVertex(blargg_friendly_000_offset_003_mesh_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 13, 10, 0),
	gsSPVertex(blargg_friendly_000_offset_003_mesh_vtx_0 + 14, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(3, 4, 6, 0),
	gsSP1Triangle(3, 6, 7, 0),
	gsSP1Triangle(8, 3, 7, 0),
	gsSP1Triangle(8, 0, 3, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(blargg_friendly_000_offset_003_mesh_vtx_0 + 29, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 7, 3, 0),
	gsSP1Triangle(7, 1, 3, 0),
	gsSP1Triangle(7, 8, 1, 0),
	gsSPEndDisplayList(),
};Vtx blargg_friendly_000_offset_003_mesh_vtx_1[26] = {
	{{{340, 81, -182},0, {368, -16},{0x24, 0xF0, 0x87, 0xFF}}},
	{{{393, -43, -105},0, {624, 240},{0x69, 0xBC, 0x19, 0xFF}}},
	{{{368, -46, -157},0, {624, -16},{0x30, 0xB6, 0xA5, 0xFF}}},
	{{{389, 88, -80},0, {368, 240},{0x76, 0xFA, 0x2F, 0xFF}}},
	{{{345, 82, -59},0, {368, 496},{0xE1, 0xE8, 0x79, 0xFF}}},
	{{{349, -48, -83},0, {624, 496},{0xE3, 0xAD, 0x5B, 0xFF}}},
	{{{324, -51, -136},0, {624, 752},{0xAA, 0xA5, 0xE7, 0xFF}}},
	{{{296, 76, -160},0, {368, 752},{0x8F, 0xDE, 0xD0, 0xFF}}},
	{{{340, 81, -182},0, {368, 1008},{0x24, 0xF0, 0x87, 0xFF}}},
	{{{368, -46, -157},0, {624, 1008},{0x30, 0xB6, 0xA5, 0xFF}}},
	{{{324, -51, -136},0, {880, 496},{0xAA, 0xA5, 0xE7, 0xFF}}},
	{{{368, -46, -157},0, {880, 240},{0x30, 0xB6, 0xA5, 0xFF}}},
	{{{340, 81, 185},0, {368, 1008},{0x24, 0xF0, 0x79, 0xFF}}},
	{{{324, -51, 139},0, {624, 752},{0xAA, 0xA5, 0x19, 0xFF}}},
	{{{368, -46, 161},0, {624, 1008},{0x30, 0xB6, 0x5B, 0xFF}}},
	{{{296, 76, 164},0, {368, 752},{0x8F, 0xDE, 0x30, 0xFF}}},
	{{{345, 82, 62},0, {368, 496},{0xE1, 0xE8, 0x87, 0xFF}}},
	{{{324, -51, 139},0, {624, 752},{0xAA, 0xA5, 0x19, 0xFF}}},
	{{{296, 76, 164},0, {368, 752},{0x8F, 0xDE, 0x30, 0xFF}}},
	{{{349, -48, 86},0, {624, 496},{0xE3, 0xAD, 0xA5, 0xFF}}},
	{{{393, -43, 108},0, {624, 240},{0x69, 0xBC, 0xE7, 0xFF}}},
	{{{389, 88, 83},0, {368, 240},{0x76, 0xFA, 0xD1, 0xFF}}},
	{{{340, 81, 185},0, {368, -16},{0x24, 0xF0, 0x79, 0xFF}}},
	{{{368, -46, 161},0, {624, -16},{0x30, 0xB6, 0x5B, 0xFF}}},
	{{{324, -51, 139},0, {880, 496},{0xAA, 0xA5, 0x19, 0xFF}}},
	{{{368, -46, 161},0, {880, 240},{0x30, 0xB6, 0x5B, 0xFF}}},
};

Gfx blargg_friendly_000_offset_003_mesh_tri_1[] = {
	gsSPVertex(blargg_friendly_000_offset_003_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 9, 6, 0),
	gsSP1Triangle(1, 5, 10, 0),
	gsSP1Triangle(1, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(blargg_friendly_000_offset_003_mesh_vtx_1 + 16, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(4, 8, 3, 0),
	gsSP1Triangle(4, 9, 8, 0),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_friendly_blargg_belly[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, blargg_friendly_blargg_belly_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(blargg_friendly_blargg_belly_lights),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_friendly_blargg_seat[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(blargg_friendly_blargg_seat_lights),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_friendly_blargg_mouth[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, blargg_friendly_blargg_body_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 60),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPSetLights1(blargg_friendly_blargg_mouth_lights),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_friendly_blargg_eye[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, blargg_friendly_blargg_eyes_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 60),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPSetLights1(blargg_friendly_blargg_eye_lights),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_friendly_blargg_teeth[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(blargg_friendly_blargg_teeth_lights),
	gsSPEndDisplayList(),
};


Gfx blargg_friendly_000_offset_mesh[] = {
	gsSPDisplayList(mat_blargg_friendly_blargg_belly),
	gsSPDisplayList(blargg_friendly_000_offset_mesh_tri_0),
	gsSPDisplayList(mat_blargg_friendly_blargg_seat),
	gsSPDisplayList(blargg_friendly_000_offset_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx blargg_friendly_000_offset_001_mesh[] = {
	gsSPDisplayList(mat_blargg_friendly_blargg_mouth),
	gsSPDisplayList(blargg_friendly_000_offset_001_mesh_tri_0),
	gsSPDisplayList(mat_blargg_friendly_blargg_eye),
	gsSPDisplayList(blargg_friendly_000_offset_001_mesh_tri_1),
	gsSPDisplayList(mat_blargg_friendly_blargg_teeth),
	gsSPDisplayList(blargg_friendly_000_offset_001_mesh_tri_2),
	gsSPEndDisplayList(),
};



Gfx blargg_friendly_000_offset_003_mesh[] = {
	gsSPDisplayList(mat_blargg_friendly_blargg_mouth),
	gsSPDisplayList(blargg_friendly_000_offset_003_mesh_tri_0),
	gsSPDisplayList(mat_blargg_friendly_blargg_teeth),
	gsSPDisplayList(blargg_friendly_000_offset_003_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx blargg_friendly_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
