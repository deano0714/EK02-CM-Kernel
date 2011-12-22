#ifndef __S6E8AA0_GAMMA_2_2_H__
#define __S6E8AA0_GAMMA_2_2_H__



static const unsigned char SEQ_APPLY_LEVEL_2_KEY[] = {
	0xF0,
	0x5A, 0x5A
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11
};

static const unsigned char SEQ_PANEL_CONDITION_SET[] = {
	0xF8,
	0x25, 0x34, 0x00, 0x00, 0x00, 0x95, 0x00, 0x3C, 0x7D, 0x08,
	0x27, 0x00, 0x00, 0x10, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x08, 0x08, 0x23, 0x23, 0xC0, 0xC1,
	0x01, 0x81, 0xC1, 0x00, 0xC8, 0xC1, 0xD3, 0x01
};

static const unsigned char SEQ_DISPLAY_CONDITION_SET[] = {
	0xF2,
	0x80, 0x03, 0x0D
};

static const unsigned char SEQ_GAMMA_CONDITION_SET[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F,
	0xF8, 0x1F, 0xF0,
	0xCC, 0xB5, 0xD2,
	0xD7, 0xD1, 0xD6,
	0xB5, 0xB4, 0xAF,
	0xC7, 0xC9, 0xC1,
	0x00, 0x81, 0x00,
	0x71, 0x00, 0xA7
};

static const unsigned char SEQ_GAMMA_UPDATE[] = {
 	0xF7, 0x01
};

static const unsigned char SEQ_ETC_SOURCE_CONTROL[] = {
	0xF6,
	0x00, 0x02, 0x00
};

static const unsigned char SEQ_ETC_ELVSS_CONTROL[] = {
	0xB1,
	0x04, 0x00
};

static const unsigned char SEQ_ETC_PENTILE_CONTROL[] = {
	0xB6,
	0x0C, 0x02, 0x03, 0x32, 0xFF,
	0x44, 0x44, 0xC0, 0x00
};

static const unsigned char SEQ_ETC_MIPI_CONTROL1[] = {
	0xE1,
	0x10, 0x1C, 0x17, 0x08, 0x1D
};

static const unsigned char SEQ_ETC_MIPI_CONTROL2[] = {
	0xE2,
	0xED, 0x07, 0xC3, 0x13, 0x0D, 0x03
};

static const unsigned char SEQ_ETC_POWER_CONTROL[] = {
	0xF4,
	0xCF, 0x0A, 0x12, 0x10, 0x19, 0x33, 0x02
};

static const unsigned char SEQ_ETC_MIPI_CONTROL3[] = {
	0xE3, 0x40
};

static const unsigned char SEQ_ETC_MIPI_CONTROL4[] = {
	0xE4,
	0x00, 0x00, 0x14, 0x80, 0x00, 0x00, 0x00
};



static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28
};

static const unsigned char SEQ_STANDBY_ON[] = {
	0x10
};


typedef enum {
    ACL_STATUS_0P = 0,
    ACL_STATUS_40P,
    ACL_STATUS_43P,
    ACL_STATUS_45P,
    ACL_STATUS_47P,
    ACL_STATUS_48P,
    ACL_STATUS_50P,
    ACL_STATUS_MAX
} ACL_STATUS;

const unsigned char SEQ_ACL_ON[] = {
	0xC0, 0x01,
};

const unsigned char SEQ_ACL_OFF[] = {
	0xC0, 0x00,
};

const unsigned char acl_cutoff_40[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x03, 0x1F, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x06, 0x0C, 0x11, 0x16, 0x1C, 0x21,
	0x26, 0x2B, 0x31, 0x36
};

const unsigned char acl_cutoff_43[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x03, 0x1F, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x07, 0x0C, 0x12, 0x18, 0x1E, 0x23,
	0x29, 0x2F, 0x34, 0x3A
};

const unsigned char acl_cutoff_45[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x03, 0x1F, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x07, 0x0D, 0x13, 0x19, 0x1F, 0x25,
	0x2B, 0x31, 0x37, 0x3D
};

const unsigned char acl_cutoff_47[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x03, 0x1F, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x07, 0x0E, 0x14, 0x1B, 0x21, 0x27,
	0x2E, 0x34, 0x3B, 0x41
};

const unsigned char acl_cutoff_48[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x03, 0x1F, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x08, 0x0E, 0x15, 0x1B, 0x22, 0x29,
	0x2F, 0x36, 0x3C, 0x43
};

const unsigned char acl_cutoff_50[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x03, 0x1F, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x08, 0x0F, 0x16, 0x1D, 0x24, 0x2A,
	0x31, 0x38, 0x3F, 0x46
};

const unsigned char * acl_cutoff_table[ACL_STATUS_MAX] = {
	SEQ_ACL_OFF,
	acl_cutoff_40,
	acl_cutoff_43,
	acl_cutoff_45,
	acl_cutoff_47,
	acl_cutoff_48,
	acl_cutoff_50,
};

#define ACL_PARAM_SIZE	ARRAY_SIZE(acl_cutoff_50)


typedef enum {
    ELVSS_28 = 0,
    ELVSS_34,
    ELVSS_40,
    ELVSS_44,
    ELVSS_STATUS_MAX,
} ELVSS_STATUS;

const unsigned char elvss_32[] = {
	0xD9,
	0x14, 0x40, 0x0C, 0xCB, 0xCE,
	0x6E, 0xC4, 0x0F, 0x40, 0x40,
	0xDF, 0x00, 0x60, 0x19
};

const unsigned char elvss_34[] = {
	0xD9,
	0x14, 0x40, 0x0C, 0xCB, 0xCE,
	0x6E, 0xC4, 0x0F, 0x40, 0x40,
	0xDD, 0x00, 0x60, 0x19
};

const unsigned char elvss_38[] = {
	0xD9,
	0x14, 0x40, 0x0C, 0xCB, 0xCE,
	0x6E, 0xC4, 0x0F, 0x40, 0x40,
	0xD9, 0x00, 0x60, 0x19
};

const unsigned char elvss_47[] = {
	0xD9,
	0x14, 0x40, 0x0C, 0xCB, 0xCE,
	0x6E, 0xC4, 0x0F, 0x40, 0x40,
	0xD0, 0x00, 0x60, 0x19
};


const unsigned char *elvss_table[ELVSS_STATUS_MAX] = {
	elvss_32,
	elvss_34,
	elvss_38,
	elvss_47,
};

#define ELVSS_PARAM_SIZE	ARRAY_SIZE(elvss_47)

enum {
	GAMMA_2_2_30CD = 0,
	GAMMA_2_2_40CD,
	GAMMA_2_2_70CD,
	GAMMA_2_2_90CD,
	GAMMA_2_2_100CD,
	GAMMA_2_2_110CD,
	GAMMA_2_2_120CD,
	GAMMA_2_2_130CD,
	GAMMA_2_2_140CD,
	GAMMA_2_2_150CD,
	GAMMA_2_2_160CD,
	GAMMA_2_2_170CD,
	GAMMA_2_2_180CD,
	GAMMA_2_2_190CD,
	GAMMA_2_2_200CD,
	GAMMA_2_2_210CD,
	GAMMA_2_2_220CD,
	GAMMA_2_2_230CD,
	GAMMA_2_2_240CD,
	GAMMA_2_2_250CD,
	GAMMA_2_2_260CD,
	GAMMA_2_2_270CD,
	GAMMA_2_2_280CD,
	GAMMA_2_2_290CD,
	GAMMA_2_2_300CD = 24,
	GAMMA_2_2_MAX
};

#define GAMMA_PARAM_SIZE	26


const unsigned char gamma22_30[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xDF, 0x1F, 0xD7, 0xDC, 0xB7, 0xE1,
	0xC0, 0xAF, 0xC4, 0xD2, 0xD0, 0xCF,
	0x00, 0x4D, 0x00, 0x40, 0x00, 0x5F,
};

const unsigned char gamma22_40[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xD5, 0x35, 0xCF, 0xDC, 0xC1, 0xE1,
	0xBF, 0xB3, 0xC1, 0xD2, 0xD1, 0xCE,
	0x00, 0x53, 0x00, 0x46, 0x00, 0x67,
};

const unsigned char gamma22_50[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xD2, 0x64, 0xCF, 0xDB, 0xC6, 0xE1,
	0xBD, 0xB3, 0xBD, 0xD2, 0xD2, 0xCE,
	0x00, 0x59, 0x00, 0x4B, 0x00, 0x6E,
};

const unsigned char gamma22_60[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xD0, 0x7C, 0xCF, 0xDB, 0xC9, 0xE0,
	0xBC, 0xB4, 0xBB, 0xCF, 0xD1, 0xCC,
	0x00, 0x5F, 0x00, 0x50, 0x00, 0x75,
};

const unsigned char gamma22_70[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xD0, 0x8E, 0xD1, 0xDB, 0xCC, 0xDF,
	0xBB, 0xB6, 0xB9, 0xD0, 0xD1, 0xCD,
	0x00, 0x63, 0x00, 0x54, 0x00, 0x7A,
};

const unsigned char gamma22_80[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xD1, 0x9E, 0xD5, 0xDA, 0xCD, 0xDD,
	0xBB, 0xB7, 0xB9, 0xCE, 0xCE, 0xC9,
	0x00, 0x68, 0x00, 0x59, 0x00, 0x81,
};

const unsigned char gamma22_90[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xD0, 0xA5, 0xD6, 0xDA, 0xCF, 0xDD,
	0xBB, 0xB7, 0xB8, 0xCC, 0xCD, 0xC7,
	0x00, 0x6C, 0x00, 0x5C, 0x00, 0x86,
};

const unsigned char gamma22_100[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xCF, 0xA7, 0xD6, 0xDA, 0xD0, 0xDC,
	0xB8, 0xB6, 0xB5, 0xCB, 0xCC, 0xC6,
	0x00, 0x71, 0x00, 0x60, 0x00, 0x8C,
};

const unsigned char gamma22_110[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x1F, 0xFE,
	0xD0, 0xAE, 0xD7, 0xD9, 0xD0, 0xDB,
	0xB9, 0xB6, 0xB5, 0xCA, 0xCC, 0xC5,
	0x00, 0x74, 0x00, 0x63, 0x00, 0x90,
};

const unsigned char gamma22_120[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x1F, 0xF9,
	0xCF, 0xB0, 0xD6, 0xD9, 0xD1, 0xDB,
	0xB9, 0xB6, 0xB4, 0xCA, 0xCB, 0xC5,
	0x00, 0x77, 0x00, 0x66, 0x00, 0x94,
};

const unsigned char gamma22_130[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x1F, 0xF7,
	0xCF, 0xB3, 0xD7, 0xD8, 0xD1, 0xD9,
	0xB7, 0xB6, 0xB3, 0xC9, 0xCA, 0xC3,
	0x00, 0x7B, 0x00, 0x69, 0x00, 0x99,
};

const unsigned char gamma22_140[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFD, 0x2F, 0xF7,
	0xDF, 0xB5, 0xD6, 0xD8, 0xD1, 0xD8,
	0xB6, 0xB5, 0xB2, 0xCA, 0xCB, 0xC4,
	0x00, 0x7E, 0x00, 0x6C, 0x00, 0x9D,

};

const unsigned char gamma22_150[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFB, 0x2F, 0xF5,
	0xD0, 0xB7, 0xD7, 0xD7, 0xD1, 0xD8,
	0xB6, 0xB5, 0xB1, 0xC8, 0xCA, 0xC3,
	0x00, 0x81, 0x00, 0x6E, 0x00, 0xA0,
};

const unsigned char gamma22_160[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFA, 0x2F, 0xF5,
	0xCE, 0xB6, 0xD5, 0xD7, 0xD2, 0xD8,
	0xB6, 0xB4, 0xB0, 0xC7, 0xC9, 0xC1,
	0x00, 0x84, 0x00, 0x71, 0x00, 0xA5,
};

const unsigned char gamma22_170[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF7, 0x2F, 0xF2,
	0xCE, 0xB9, 0xD5, 0xD8, 0xD2, 0xD8,
	0xB4, 0xB4, 0xAF, 0xC7, 0xC9, 0xC1,
	0x00, 0x87, 0x00, 0x73, 0x00, 0xA8,
};

const unsigned char gamma22_180[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF5, 0x2F, 0xF0,
	0xDF, 0xBA, 0xD5, 0xD7, 0xD2, 0xD7,
	0xB4, 0xB4, 0xAF, 0xC5, 0xC7, 0xBF,
	0x00, 0x8A, 0x00, 0x76, 0x00, 0xAC,
};

const unsigned char gamma22_190[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF2, 0x2F, 0xED,
	0xCE, 0xBB, 0xD4, 0xD6, 0xD2, 0xD6,
	0xB5, 0xB4, 0xAF, 0xC5, 0xC7, 0xBF,
	0x00, 0x8c, 0x00, 0x78, 0x00, 0xAF,
};

const unsigned char gamma22_200[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF2, 0x2F, 0xED,
	0xCE, 0xBB, 0xD4, 0xD7, 0xD3, 0xD6,
	0xB3, 0xB3, 0xAE, 0xC6, 0xC7, 0xBF,
	0x00, 0x8E, 0x00, 0x7A, 0x00, 0xB2,
};

const unsigned char gamma22_210[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEF, 0x2F, 0xEB,
	0xCD, 0xBB, 0xD2, 0xD7, 0xD3, 0xD6,
	0xB3, 0xB4, 0xAE, 0xC5, 0xC6, 0xBE,
	0x00, 0x91, 0x00, 0x7D, 0x00, 0xB6,
};

const unsigned char gamma22_220[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEE, 0x2F, 0xEA,
	0xCE, 0xBD, 0xD4, 0xD6, 0xD2, 0xD5,
	0xB2, 0xB3, 0xAD, 0xC3, 0xC4, 0xBB,
	0x00, 0x94, 0x00, 0x7F, 0x00, 0xBA,
};

const unsigned char gamma22_230[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEC, 0x2F, 0xE8,
	0xCE, 0xBE, 0xD3, 0xD6, 0xD3, 0xD5,
	0xB2, 0xB2, 0xAC, 0xC3, 0xC5, 0xBC,
	0x00, 0x96, 0x00, 0x81, 0x00, 0xBD,
};

const unsigned char gamma22_240[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEB, 0x2F, 0xE7,
	0xCE, 0xBF, 0xD3, 0xD6, 0xD2, 0xD5,
	0xB1, 0xB2, 0xAB, 0xC2, 0xC4, 0xBB,
	0x00, 0x99, 0x00, 0x83, 0x00, 0xC0,
};

const unsigned char gamma22_250[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEF, 0x5F, 0xE9,
	0xCA, 0xBF, 0xD3, 0xD5, 0xD2, 0xD4,
	0xB2, 0xB2, 0xAB, 0xC1, 0xC4, 0xBA,
	0x00, 0x9B, 0x00, 0x85, 0x00, 0xC3,
};

const unsigned char gamma22_260[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEA, 0x5F, 0xE8,
	0xCE, 0xBF, 0xD2, 0xD5, 0xD2, 0xD4,
	0xB1, 0xB2, 0xAB, 0xC1, 0xC2, 0xB9,
	0x00, 0x9D, 0x00, 0x87, 0x00, 0xC6,
};

const unsigned char gamma22_270[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xE9, 0x5F, 0xE7,
	0xCD, 0xBF, 0xD2, 0xD6, 0xD2, 0xD4,
	0xB1, 0xB2, 0xAB, 0xBE, 0xC0, 0xB7,
	0x00, 0xA1, 0x00, 0x8A, 0x00, 0xCA,
};

const unsigned char gamma22_280[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xE8, 0x61, 0xE6,
	0xCD, 0xBF, 0xD1, 0xD6, 0xD3, 0xD4,
	0xAF, 0xB0, 0xA9, 0xBE, 0xC1, 0xB7,
	0x00, 0xA3, 0x00, 0x8B, 0x00, 0xCE,
};

const unsigned char gamma22_290[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xE8, 0x62, 0xE5,
	0xCC, 0xC0, 0xD0, 0xD6, 0xD2, 0xD4,
	0xAF, 0xB1, 0xA9, 0xBD, 0xC0, 0xB6,
	0x00, 0xA5, 0x00, 0x8D, 0x00, 0xD0,
};

const unsigned char gamma22_300[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xE7, 0x7F, 0xE3,
	0xCC, 0xC1, 0xD0, 0xD5, 0xD3, 0xD3,
	0xAE, 0xAF, 0xA8, 0xBE, 0xC0, 0xB7,
	0x00, 0xA8, 0x00, 0x90, 0x00, 0xD3,
};


const unsigned char gamma19_30[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xD7, 0x6F, 0xD5, 0xDF, 0xC8, 0xE4,
	0xC7, 0xBA, 0xC8, 0xD7, 0xD6, 0xD5,
	0x00, 0x4D, 0x00, 0x40, 0x00, 0x5F,
};

const unsigned char gamma19_40[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xD6, 0xA1, 0xD7, 0xDE, 0xCF, 0xE3,
	0xC5, 0xBE, 0xC6, 0xD6, 0xD7, 0xD4,
	0x00, 0x53, 0x00, 0x46, 0x00, 0x67,
};

const unsigned char gamma19_50[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xD6, 0xAA, 0xD8, 0xE0, 0xD5, 0xE4,
	0xC4, 0xBD, 0xC2, 0xD7, 0xD7, 0xD4,
	0x00, 0x59, 0x00, 0x4B, 0x00, 0x6E,
};

const unsigned char gamma19_60[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFF,
	0xD5, 0xB0, 0xDB, 0xDF, 0xD4, 0xE1,
	0xC3, 0xBE, 0xC1, 0xD5, 0xD6, 0xD2,
	0x00, 0x5F, 0x00, 0x50, 0x00, 0x75,
};

const unsigned char gamma19_70[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFF, 0x00, 0xFC,
	0xD6, 0xB7, 0xDC, 0xDF, 0xD6, 0xE1,
	0xC2, 0xBF, 0xC0, 0xD5, 0xD5, 0xD1,
	0x00, 0x63, 0x00, 0x54, 0x00, 0x7A,
};

const unsigned char gamma19_80[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFA, 0x1F, 0xF5,
	0xD6, 0xBD, 0xDC, 0xDD, 0xD6, 0xDF,
	0xC3, 0xC0, 0xC0, 0xD3, 0xD2, 0xCE,
	0x00, 0x68, 0x00, 0x59, 0x00, 0x81,
};

const unsigned char gamma19_90[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xFA, 0x1F, 0xF5,
	0xD6, 0xC0, 0xDC, 0xDD, 0xD6, 0xDE,
	0xC1, 0xBE, 0xBD, 0xD2, 0xD4, 0xCE,
	0x00, 0x6C, 0x00, 0x5C, 0x00, 0x86,
};

const unsigned char gamma19_100[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF6, 0x1F, 0xF2,
	0xD4, 0xC0, 0xDA, 0xDE, 0xD8, 0xDE,
	0xC0, 0xBE, 0xBC, 0xD0, 0xD2, 0xCC,
	0x00, 0x71, 0x00, 0x60, 0x00, 0x8C,
};

const unsigned char gamma19_110[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF5, 0x44, 0xF1,
	0xD3, 0xC1, 0xD9, 0xDC, 0xD6, 0xDC,
	0xC0, 0xBF, 0xBC, 0xD1, 0xD2, 0xCC,
	0x00, 0x74, 0x00, 0x63, 0x00, 0x90,
};

const unsigned char gamma19_120[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF1, 0x6D, 0xF1,
	0xD4, 0xC4, 0xD9, 0xDE, 0xD8, 0xDD,
	0xBE, 0xBE, 0xBA, 0xD1, 0xD1, 0xCC,
	0x00, 0x77, 0x00, 0x66, 0x00, 0x94,
};

const unsigned char gamma19_130[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF1, 0x6D, 0xF1,
	0xD4, 0xCE, 0xD8, 0xDC, 0xD8, 0xDC,
	0xBD, 0xBD, 0xB9, 0xCF, 0xD0, 0xC9,
	0x00, 0x7B, 0x00, 0x69, 0x00, 0x99,
};

const unsigned char gamma19_140[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF1, 0x86, 0xF1,
	0xD3, 0xC5, 0xD7, 0xDD, 0xD9, 0xDC,
	0xBC, 0xBC, 0xB8, 0xD0, 0xD1, 0xCA,
	0x00, 0x7E, 0x00, 0x6C, 0x00, 0x9D,
};

const unsigned char gamma19_150[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF2, 0xBC, 0xF1,
	0xD2, 0xC6, 0xD7, 0xDB, 0xD8, 0xDB,
	0xBC, 0xBC, 0xB7, 0xCE, 0xCF, 0xC9,
	0x00, 0x81, 0x00, 0x6E, 0x00, 0xA0,
};

const unsigned char gamma19_160[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEF, 0x97, 0xF1,
	0xD4, 0xC8, 0xD7, 0xDB, 0xD8, 0xDA,
	0xBC, 0xBC, 0xB7, 0xCD, 0xCF, 0xC7,
	0x00, 0x84, 0x00, 0x71, 0x00, 0xA5,
};

const unsigned char gamma19_170[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF0, 0xA2, 0xF3,
	0xD4, 0xC8, 0xD6, 0xDB, 0xD9, 0xDA,
	0xBB, 0xBC, 0xB6, 0xCD, 0xCF, 0xC8,
	0x00, 0x87, 0x00, 0x73, 0x00, 0xA8,
};

const unsigned char gamma19_180[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF0, 0xA9, 0xF4,
	0xD2, 0xC7, 0xD4, 0xDB, 0xD9, 0xDA,
	0xBB, 0xBC, 0xB6, 0xCD, 0xCE, 0xC7,
	0x00, 0x8A, 0x00, 0x76, 0x00, 0xAC,
};

const unsigned char gamma19_190[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF0, 0xB1, 0xF5,
	0xD3, 0xC8, 0xD4, 0xDA, 0xD8, 0xD9,
	0xBC, 0xBB, 0xB6, 0xCB, 0xCE, 0xC6,
	0x00, 0x8c, 0x00, 0x78, 0x00, 0xAF,
};

const unsigned char gamma19_200[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF0, 0xB1, 0xF5,
	0xD3, 0xC8, 0xD4, 0xDA, 0xD8, 0xD8,
	0xBA, 0xBB, 0xB5, 0xCB, 0xCC, 0xC5,
	0x00, 0x8F, 0x00, 0x7B, 0x00, 0xB3,
};

const unsigned char gamma19_210[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEF, 0xB3, 0xF4,
	0xD3, 0xC9, 0xD4, 0xDA, 0xD9, 0xD9,
	0xBA, 0xBA, 0xB4, 0xCA, 0xCC, 0xC4,
	0x00, 0x91, 0x00, 0x7D, 0x00, 0xB6,
};

const unsigned char gamma19_220[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEF, 0xB9, 0xF5,
	0xD5, 0xCC, 0xD6, 0xD9, 0xD7, 0xD7,
	0xBA, 0xBA, 0xB4, 0xC8, 0xCB, 0xC2,
	0x00, 0x94, 0x00, 0x7F, 0x00, 0xBA,
};

const unsigned char gamma19_230[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEE, 0xB9, 0xF5,
	0xD1, 0xCA, 0xD2, 0xDB, 0xD9, 0xD9,
	0xB9, 0xBA, 0xB3, 0xC9, 0xCB, 0xC3,
	0x00, 0x96, 0x00, 0x81, 0x00, 0xBD,
};

const unsigned char gamma19_240[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xF0, 0xBD, 0xF7,
	0xD1, 0xCB, 0xD3, 0xD9, 0xD5, 0xD6,
	0xB9, 0xBA, 0xB3, 0xC8, 0xCB, 0xC2,
	0x00, 0x99, 0x00, 0x83, 0x00, 0xC0,
};

const unsigned char gamma19_250[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEE, 0xBD, 0xF5,
	0xD0, 0xC8, 0xD1, 0xDA, 0xD8, 0xD7,
	0xB9, 0xBA, 0xB3, 0xC7, 0xC9, 0xC1,
	0x00, 0x9C, 0x00, 0x86, 0x00, 0xC4,
};

const unsigned char gamma19_260[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xBE, 0xF4,
	0xD2, 0xCB, 0xD2, 0xDA, 0xD8, 0xD7,
	0xB8, 0xBA, 0xB3, 0xC6, 0xC7, 0xBF,
	0x00, 0x9E, 0x00, 0x88, 0x00, 0xC7,
};

const unsigned char gamma19_270[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xBE, 0xF4,
	0xD2, 0xCC, 0xD3, 0xD9, 0xD6, 0xD6,
	0xB8, 0xB9, 0xB2, 0xC5, 0xC8, 0xBF,
	0x00, 0xA1, 0x00, 0x8A, 0x00, 0xCA,
};

const unsigned char gamma19_280[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xC3, 0xF5,
	0xD1, 0xCB, 0xD1, 0xDA, 0xD8, 0xD7,
	0xB7, 0xB8, 0xB1, 0xC5, 0xC8, 0xBE,
	0x00, 0xA3, 0x00, 0x8C, 0x00, 0xCE,
};

const unsigned char gamma19_290[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEE, 0xC4, 0xF6,
	0xD1, 0xC9, 0xD0, 0xD9, 0xD8, 0xD7,
	0xB6, 0xB8, 0xB0, 0xC5, 0xC6, 0xBE,
	0x00, 0xA5, 0x00, 0x8E, 0x00, 0xD0,
};

const unsigned char gamma19_300[GAMMA_PARAM_SIZE] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEC, 0xC4, 0xF5,
	0xD1, 0xCB, 0xD1, 0xD8, 0xD7, 0xD6,
	0xB6, 0xB7, 0xAF, 0xC5, 0xC7, 0xBE,
	0x00, 0xA8, 0x00, 0x90, 0x00, 0xD3,
};

const unsigned char *gamma22_table[GAMMA_2_2_MAX] = {
	gamma22_30,
	gamma22_40,
	gamma22_70,
	gamma22_90,
	gamma22_100,
	gamma22_110,
	gamma22_120,
	gamma22_130,
	gamma22_140,
	gamma22_150,
	gamma22_160,
	gamma22_170,
	gamma22_180,
	gamma22_190,
	gamma22_200,
	gamma22_210,
	gamma22_220,
	gamma22_230,
	gamma22_240,
	gamma22_250,
	gamma22_260,
	gamma22_270,
	gamma22_280,
	gamma22_290,
	gamma22_300,
};

const unsigned char *gamma19_table[GAMMA_2_2_MAX] = {
	gamma19_30,
	gamma19_40,
	gamma19_70,
	gamma19_90,
	gamma19_100,
	gamma19_110,
	gamma19_120,
	gamma19_130,
	gamma19_140,
	gamma19_150,
	gamma19_160,
	gamma19_170,
	gamma19_180,
	gamma19_190,
	gamma19_200,
	gamma19_210,
	gamma19_220,
	gamma19_230,
	gamma19_240,
	gamma19_250,
	gamma19_260,
	gamma19_270,
	gamma19_280,
	gamma19_290,
	gamma19_300,
};


#endif /* __S6E8AA0_GAMMA_2_2_H__ */