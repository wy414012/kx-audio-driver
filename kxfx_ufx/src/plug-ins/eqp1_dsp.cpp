// kX DSP Generated file

// 10kX microcode
// Patch name: 'eqp1_dsp'

char *eqp1_dsp_copyright="� Max Mikhailov, 2002-2014";
char *eqp1_dsp_engine="Emu10kX";
char *eqp1_dsp_comment="1 Band Parametric Equalizer; v0.7; $nobypass";
char *eqp1_dsp_created="May 9 2003";
char *eqp1_dsp_guid="8010000D-0ADF-11D6-BFBC-D4F706E10C52";

char *eqp1_dsp_name="eqp1_dsp";
int eqp1_dsp_itramsize=0,eqp1_dsp_xtramsize=0;

efx_register_info eqp1_dsp_info[]={
	{ "in0",0x4000,0x7,0xffff,0x0 },
	{ "in1",0x4001,0x7,0xffff,0x0 },
	{ "out0",0x8000,0x8,0xffff,0x0 },
	{ "out1",0x8001,0x8,0xffff,0x0 },
	{ "b0",0x8002,0x1,0xffff,0x7fffffff },
	{ "b1",0x8003,0x1,0xffff,0x0 },
	{ "b2",0x8004,0x1,0xffff,0x0 },
	{ "a1",0x8005,0x1,0xffff,0x0 },
	{ "a2",0x8006,0x1,0xffff,0x0 },
	{ "z1",0x8007,0x1,0xffff,0x0 },
	{ "z2",0x8008,0x1,0xffff,0x0 },
	{ "z3",0x8009,0x1,0xffff,0x0 },
	{ "z4",0x800a,0x1,0xffff,0x0 },
	{ "t",0x800b,0x3,0xffff,0x0 },
};

efx_code eqp1_dsp_code[]={
	{ 0x0,0x800b,0x2040,0x4000,0x8002 },
	{ 0x6,0x8000,0x2056,0x8007,0x8007 },
	{ 0x0,0x8007,0x8008,0x8000,0x8005 },
	{ 0x0,0x8007,0x2056,0x800b,0x8003 },
	{ 0x0,0x8008,0x2040,0x8000,0x8006 },
	{ 0x0,0x8008,0x2056,0x800b,0x8004 },
	{ 0x4,0x8000,0x2040,0x8000,0x2040 },
	{ 0x0,0x800b,0x2040,0x4001,0x8002 },
	{ 0x6,0x8001,0x2056,0x8009,0x8009 },
	{ 0x0,0x8009,0x800a,0x8001,0x8005 },
	{ 0x0,0x8009,0x2056,0x800b,0x8003 },
	{ 0x0,0x800a,0x2040,0x8001,0x8006 },
	{ 0x0,0x800a,0x2056,0x800b,0x8004 },
	{ 0x4,0x8001,0x2040,0x8001,0x2040 },
};

