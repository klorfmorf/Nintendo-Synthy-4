#define NS4_GAME							u8"Perfect Dark"
#define NS4_TITLE_POSTFIX					u8" (Surround)"
#define NS4_COMPOSERS						u8"David Clynick, Graeme Norgate, Grant Kirkhope"
#define NS4_YEAR							u8"2000"
#define NS4_FOLDER							u8"Perfect Dark"
#define NS4_OUTPUT_HZ						44100
#define NS4_OUTPUT_BITS						24
#define NS4_BANK							u8"01"
#define NS4_REVERB_TRACKS					2
#define NS4_REVERB							ns4::CReverb::NS4_T_PERFECT_DARK_0
#define NS4_ORIG_HZ							22018
#define NS4_CURVE							20.0
#define NS4_OUT_DIRECTORY					u8"C:\\N64OST\\Perfect Dark Karl\\"
#define NS4_OUT_DIRECTORY_NUMBERS			NS4_OUT_DIRECTORY u8"Numbered\\"
#define NS4_PREFADE_DUR						0.0
#define NS4_FADE_FILE						u8"C:\\My Projects\\Nintendo-Synthy-4\\Fades\\StudioFadeCD_S.wav"
#define NS4_WET_FILTER_FREQ					0.0//(NS4_ORIG_HZ / std::pow( 2.0, 1.125 ))
//#define NS4_MASTER_REVERB_VOLUME			2.0
#define NS4_VIB_SCALE						2.0
#define NS4_ENV_MULTIPLIER					(1.0 / 3.0)
#define NS4_SAMPLE_REPLACEMENTS				{																			\
											/*{ 0x01, 19, 1, u8"bongolo", 0, 0, UINT32_MAX, UINT32_MAX },*/					\
											{ 0x01, 26, 0, u8"vocal_wierd_8+1", 0, 0, UINT32_MAX, UINT32_MAX },			\
											/*{ 0x01, 72, 0, u8"ice_chimeC3", 0, 0, UINT32_MAX, UINT32_MAX },*/				\
											/*{ 0x01, 108, 0, u8"drive_past1", 0, 121492, UINT32_MAX, UINT32_MAX },*/		\
											{ 0x01, 113, 0, u8"orchestcrash_22", 0, 0, UINT32_MAX, UINT32_MAX },		\
											{ 0x01, 116, 0, u8"dopebeat1", 0, 60774, UINT32_MAX, UINT32_MAX },			\
											{ 0x01, 118, 0, u8"clusterC3L_22", 0, 0, UINT32_MAX, UINT32_MAX },			\
											/*{ 0x01, 119, 0, u8"bigthrob", 0, 60770, 7521, 104022 },*/						\
											/*{ 0x01, 121, 0, u8"blasty1L", 0, 44100*2, UINT32_MAX, UINT32_MAX },*/				\
											/*{ 0x01, 121, 1, u8"blasty1R", 0, 44100*2, UINT32_MAX, UINT32_MAX },*/				\
											}

#define NS4_OVERSAMPLING					(1 << 2)
#define NS4_OVERSAMPLING_BW					22050.0 / 3.0
#define NS4_ANTI_ALIASING_LEVEL				2
#define NS4_ANTI_ALIASING_HZ				20000.0


/*
{ u8"18 Perfect Dark (U) (V1.1) 0000000D 00E8D9F0 Carrington Institute.mid", u8"Perfect Dark (U) (V1.1) 0000000D 00E8D9F0 Carrington Institute.mid TrackParseDebug.txt", u8"Carrington Institute", 0,
	1,
	{
		{ NS4_SET_COMPOSER( u8"Grant Kirkhope" ) },
	},
	6
},

{ u8"7 Perfect Dark (U) (V1.1) 0000000C 00E8CE60 Carrington Villa Hostage One.mid", u8"Perfect Dark (U) (V1.1) 0000000C 00E8CE60 Villa.mid TrackParseDebug.txt", u8"Carrington Villa: Hostage One", 0,
	1,
	{
		{ NS4_SET_COMPOSER( u8"Grant Kirkhope" ) },
	},
	6
},

{ u8"13 Perfect Dark (U) (V1.1) 00000017 00E932DE Air Base Espionage.mid", u8"Perfect Dark (U) (V1.1) 00000017 00E932DE Air Base.mid TrackParseDebug.txt", u8"Air Base: Espionage", 0,
	1,
	{
		{ NS4_SET_COMPOSER( u8"Grant Kirkhope" ) },
	},
	6
},

{ u8"17 Perfect Dark (U) (V1.1) 00000007 00E863A6 Deep Sea Nullify Threat.mid", u8"Perfect Dark (U) (V1.1) 00000007 00E863A6 Deep Sea.mid TrackParseDebug.txt", u8"Deep Sea: Nullify Threat", 0,
	1,
	{
		{ NS4_SET_COMPOSER( u8"Graeme Norgate and Grant Kirkhope" ) },
	},
	6
},

{ u8"27 Perfect Dark (U) (V1.1) 00000065 00ED30D4 Training.mid", u8"Perfect Dark (U) (V1.1) 00000065 00ED30D4 Training.mid TrackParseDebug.txt", u8"Training", 0,
	1,
	{
		{ NS4_SET_COMPOSER( u8"Grant Kirkhope" ) },
	},
	6
},
*/
{ u8"33 Perfect Dark (U) (V1.1) 0000003F 00EB14DA Maian Tears.mid", u8"Perfect Dark (U) (V1.1) 0000003F 00EB14DA Maian Tears.mid TrackParseDebug.txt", u8"Maian Tears", 0,
	1,
	{
		{ NS4_SET_COMPOSER( u8"David Clynick" ) },
	},
	8
},
