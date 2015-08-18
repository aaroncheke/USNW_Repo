// Random number script by Kegetys

// texture path
_path = "\f2fmod\f2f_conf\data\markings\";

// arrays for numbers (use texture names without extension)
_nums1 = ["markings_01", "markings_02", "markings_03", "markings_04", "markings_05"];

// randomizer
_v = _this select 0;
_v setobjecttexture[0, _path+(_nums1 select (random ((count _nums1)-1)))+".paa"];
