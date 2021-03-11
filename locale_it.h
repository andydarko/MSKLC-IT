/*
   Copyright (c) 2019 Stefan Kremser
   This software is licensed under the MIT License. See the license file for details.
   Source: github.com/spacehuhn/WiFiDuck
   
   edited with <3 by: https://github.com/andydarko
*/

#pragma once

#include "usb_hid_keys.h"

// Modifier(s), Key
const uint8_t ascii_it[] PROGMEM = {
	/*[0, 0x00]*/ KEY_NONE,       KEY_NONE,       // NUL
	/*[1, 0x01]*/ KEY_NONE,       KEY_NONE,       // SOH
	/*[2, 0x02]*/ KEY_NONE,       KEY_NONE,       // STX
	/*[3, 0x03]*/ KEY_NONE,       KEY_NONE,       // ETX
	/*[4, 0x04]*/ KEY_NONE,       KEY_NONE,       // EOT
	/*[5, 0x05]*/ KEY_NONE,       KEY_NONE,       // ENQ
	/*[6, 0x06]*/ KEY_NONE,       KEY_NONE,       // ACK
	/*[7, 0x07]*/ KEY_NONE,       KEY_NONE,       // BEL
	/*[8, 0x08]*/ KEY_NONE,       KEY_BACKSPACE,  // BS	Backspace
	/*[9, 0x09]*/ KEY_NONE,       KEY_TAB,        // TAB	Tab

	/*[10, 0x0a]*/ KEY_NONE,       KEY_ENTER,      // LF	Enter
	/*[11, 0x0b]*/ KEY_NONE,       KEY_NONE,       // VT
	/*[12, 0x0c]*/ KEY_NONE,       KEY_NONE,       // FF
	/*[13, 0x0d]*/ KEY_NONE,       KEY_NONE,       // CR
	/*[14, 0x0e]*/ KEY_NONE,       KEY_NONE,       // SO
	/*[15, 0x0f]*/ KEY_NONE,       KEY_NONE,       // SI
	/*[16, 0x10]*/ KEY_NONE,       KEY_NONE,       // DEL
	/*[17, 0x11]*/ KEY_NONE,       KEY_NONE,       // DC1
	/*[18, 0x12]*/ KEY_NONE,       KEY_NONE,       // DC2
	/*[19, 0x13]*/ KEY_NONE,       KEY_NONE,       // DC3

	/*[20, 0x14]*/ KEY_NONE,       KEY_NONE,       // DC4
	/*[21, 0x15]*/ KEY_NONE,       KEY_NONE,       // NAK
	/*[22, 0x16]*/ KEY_NONE,       KEY_NONE,       // SYN
	/*[23, 0x17]*/ KEY_NONE,       KEY_NONE,       // ETB
	/*[24, 0x18]*/ KEY_NONE,       KEY_NONE,       // CAN
	/*[25, 0x19]*/ KEY_NONE,       KEY_NONE,       // EM
	/*[26, 0x1a]*/ KEY_NONE,       KEY_NONE,       // SUB
	/*[27, 0x1b]*/ KEY_NONE,       KEY_NONE,       // ESC
	/*[28, 0x1c]*/ KEY_NONE,       KEY_NONE,       // FS
	/*[29, 0x1d]*/ KEY_NONE,       KEY_NONE,       // GS

	/*[30, 0x1e]*/ KEY_NONE,       KEY_NONE,       // RS
	/*[31, 0x1f]*/ KEY_NONE,       KEY_NONE,       // US
	/*[32, 0x20]*/ KEY_NONE,       KEY_SPACE,      // ' '
	/*[33, 0x21]*/ KEY_MOD_LSHIFT, KEY_1,          // !
	/*[34, 0x22]*/ KEY_MOD_LSHIFT, KEY_2,          // "
	/*[35, 0x23]*/ KEY_NONE, KEY_HASHTILDE,        // #
	/*[36, 0x24]*/ KEY_MOD_LSHIFT, KEY_4,          // $
	/*[37, 0x25]*/ KEY_MOD_LSHIFT, KEY_5,          // %
	/*[38, 0x26]*/ KEY_MOD_LSHIFT, KEY_7,          // &
	/*[39, 0x27]*/ KEY_NONE,       KEY_APOSTROPHE, // '

	/*[40, 0x28]*/ KEY_MOD_LSHIFT, KEY_9,          // (
	/*[41, 0x29]*/ KEY_MOD_LSHIFT, KEY_0,          // )
	/*[42, 0x2a]*/ KEY_MOD_LSHIFT, KEY_8,          // *
	/*[43, 0x2b]*/ KEY_MOD_LSHIFT, KEY_EQUAL,      // +
	/*[44, 0x2c]*/ KEY_NONE,       KEY_COMMA,      // ,
	/*[45, 0x2d]*/ KEY_NONE,       KEY_MINUS,      // -
	/*[46, 0x2e]*/ KEY_NONE,       KEY_DOT,        // .
	/*[47, 0x2f]*/ KEY_NONE,       KEY_SLASH,      // /
	/*[48, 0x30]*/ KEY_NONE,       KEY_0,          // 0
	/*[49, 0x31]*/ KEY_NONE,       KEY_1,          // 1

	/*[50, 0x32]*/ KEY_NONE,       KEY_2,          // 2
	/*[51, 0x33]*/ KEY_NONE,       KEY_3,          // 3
	/*[52, 0x34]*/ KEY_NONE,       KEY_4,          // 4
	/*[53, 0x35]*/ KEY_NONE,       KEY_5,          // 5
	/*[54, 0x36]*/ KEY_NONE,       KEY_6,          // 6
	/*[55, 0x37]*/ KEY_NONE,       KEY_7,          // 7
	/*[56, 0x38]*/ KEY_NONE,       KEY_8,          // 8
	/*[57, 0x39]*/ KEY_NONE,       KEY_9,          // 9
	/*[58, 0x3a]*/ KEY_MOD_LSHIFT, KEY_SEMICOLON,  // :
	/*[59, 0x3b]*/ KEY_NONE,       KEY_SEMICOLON,  // ;

	/*[60, 0x3c]*/ KEY_MOD_LSHIFT, KEY_COMMA,      // <
	/*[61, 0x3d]*/ KEY_NONE,       KEY_EQUAL,      // =
	/*[62, 0x3e]*/ KEY_MOD_LSHIFT, KEY_DOT,        // >
	/*[63, 0x3f]*/ KEY_MOD_LSHIFT, KEY_SLASH,      // ?
	/*[64, 0x40]*/ KEY_MOD_LSHIFT, KEY_APOSTROPHE, // @
	/*[65, 0x41]*/ KEY_MOD_LSHIFT, KEY_A,          // A
	/*[66, 0x42]*/ KEY_MOD_LSHIFT, KEY_B,          // B
	/*[67, 0x43]*/ KEY_MOD_LSHIFT, KEY_C,          // C
	/*[68, 0x44]*/ KEY_MOD_LSHIFT, KEY_D,          // D
	/*[69, 0x45]*/ KEY_MOD_LSHIFT, KEY_E,          // E

	/*[70, 0x46]*/ KEY_MOD_LSHIFT, KEY_F,          // F
	/*[71, 0x47]*/ KEY_MOD_LSHIFT, KEY_G,          // G
	/*[72, 0x48]*/ KEY_MOD_LSHIFT, KEY_H,          // H
	/*[73, 0x49]*/ KEY_MOD_LSHIFT, KEY_I,          // I
	/*[74, 0x4a]*/ KEY_MOD_LSHIFT, KEY_J,          // J
	/*[75, 0x4b]*/ KEY_MOD_LSHIFT, KEY_K,          // K
	/*[76, 0x4c]*/ KEY_MOD_LSHIFT, KEY_L,          // L
	/*[77, 0x4d]*/ KEY_MOD_LSHIFT, KEY_M,          // M
	/*[78, 0x4e]*/ KEY_MOD_LSHIFT, KEY_N,          // N
	/*[79, 0x4f]*/ KEY_MOD_LSHIFT, KEY_O,          // O

	/*[80, 0x50]*/ KEY_MOD_LSHIFT, KEY_P,          // P
	/*[81, 0x51]*/ KEY_MOD_LSHIFT, KEY_Q,          // Q
	/*[82, 0x52]*/ KEY_MOD_LSHIFT, KEY_R,          // R
	/*[83, 0x53]*/ KEY_MOD_LSHIFT, KEY_S,          // S
	/*[84, 0x54]*/ KEY_MOD_LSHIFT, KEY_T,          // T
	/*[85, 0x55]*/ KEY_MOD_LSHIFT, KEY_U,          // U
	/*[86, 0x56]*/ KEY_MOD_LSHIFT, KEY_V,          // V
	/*[87, 0x57]*/ KEY_MOD_LSHIFT, KEY_W,          // W
	/*[88, 0x58]*/ KEY_MOD_LSHIFT, KEY_X,          // X
	/*[89, 0x59]*/ KEY_MOD_LSHIFT, KEY_Y,          // Y

	/*[90, 0x5a]*/ KEY_MOD_LSHIFT, KEY_Z,          // Z
	/*[91, 0x5b]*/ KEY_NONE,       KEY_LEFTBRACE,  // [
	/*[92, 0x5c]*/ KEY_NONE,       KEY_BACKSLASH,  // bslash
	/*[93, 0x5d]*/ KEY_NONE,       KEY_RIGHTBRACE, // ]
	/*[94, 0x5e]*/ KEY_MOD_LSHIFT, KEY_6,          // ^
	/*[95, 0x5f]*/ KEY_MOD_LSHIFT, KEY_MINUS,      // _
	/*[96, 0x60]*/ KEY_NONE,       KEY_GRAVE,      // `
	/*[97, 0x61]*/ KEY_NONE,       KEY_A,          // a
	/*[98, 0x62]*/ KEY_NONE,       KEY_B,          // b
	/*[99, 0x63]*/ KEY_NONE,       KEY_C,          // c

	/*[100, 0x64]*/ KEY_NONE,       KEY_D,          // d
	/*[101, 0x65]*/ KEY_NONE,       KEY_E,          // e
	/*[102, 0x66]*/ KEY_NONE,       KEY_F,          // f
	/*[103, 0x67]*/ KEY_NONE,       KEY_G,          // g
	/*[104, 0x68]*/ KEY_NONE,       KEY_H,          // h
	/*[105, 0x69]*/ KEY_NONE,       KEY_I,          // i
	/*[106, 0x6a]*/ KEY_NONE,       KEY_J,          // j
	/*[107, 0x6b]*/ KEY_NONE,       KEY_K,          // k
	/*[108, 0x6c]*/ KEY_NONE,       KEY_L,          // l
	/*[109, 0x6d]*/ KEY_NONE,       KEY_M,          // m

	/*[110, 0x6e]*/ KEY_NONE,       KEY_N,          // n
	/*[111, 0x6f]*/ KEY_NONE,       KEY_O,          // o
	/*[112, 0x70]*/ KEY_NONE,       KEY_P,          // p
	/*[113, 0x71]*/ KEY_NONE,       KEY_Q,          // q
	/*[114, 0x72]*/ KEY_NONE,       KEY_R,          // r
	/*[115, 0x73]*/ KEY_NONE,       KEY_S,          // s
	/*[116, 0x74]*/ KEY_NONE,       KEY_T,          // t
	/*[117, 0x75]*/ KEY_NONE,       KEY_U,          // u
	/*[118, 0x76]*/ KEY_NONE,       KEY_V,          // v
	/*[119, 0x77]*/ KEY_NONE,       KEY_W,          // w

	/*[120, 0x78]*/ KEY_NONE,       KEY_X,          // x
	/*[121, 0x79]*/ KEY_NONE,       KEY_Y,          // y
	/*[122, 0x7a]*/ KEY_NONE,       KEY_Z,          // z
	/*[123, 0x7b]*/ KEY_MOD_LSHIFT, KEY_LEFTBRACE,  // {
	/*[124, 0x7c]*/ KEY_MOD_LSHIFT, KEY_BACKSLASH,  // |
	/*[125, 0x7d]*/ KEY_MOD_LSHIFT, KEY_RIGHTBRACE, // }
	/*[126, 0x7e]*/ KEY_MOD_LSHIFT, KEY_HASHTILDE,  // ~
	/*[127, 0x7f]*/ KEY_NONE,       KEY_NONE        // DEL
};

const uint8_t extended_ascii_it[] PROGMEM = {
	/*[167, 0xa7]*/ 0xa7, KEY_MOD_LSHIFT, KEY_APOSTROPHE,       	// °
	/*[133, 0x85]*/ 0x85, KEY_NONE,	KEY_APOSTROPHE,             	// à	
	/*[135, 0x87]*/ 0x87, KEY_MOD_LSHIFT, KEY_SEMICOLON,       	// ç
	/*[138, 0x8a]*/ 0x8a, KEY_NONE,	KEY_LEFTBRACE,              	// è
	/*[130, 0x82]*/ 0x82, KEY_MOD_LSHIFT, KEY_LEFTBRACE,        	// é
	/*[141, 0x8d]*/ 0x8d, KEY_NONE,	KEY_EQUAL,			// ì
	/*[149, 0x95]*/ 0x95, KEY_NONE,	KEY_SEMICOLON,			// ò
	/*[156, 0x9c]*/ 0x9c, KEY_MOD_LSHIFT, KEY_3,                	// £
	/*[151, 0x97]*/ 0x97, KEY_NONE, KEY_BACKSLASH,			// ù
	/*[245, 0xf5]*/ 0xf5, KEY_MOD_LSHIFT, KEY_BACKSLASH,		// §
};

const uint8_t utf8_it[] PROGMEM = {
    	0xc2, 0xb0, 0x00, 0x00, KEY_MOD_LSHIFT, KEY_APOSTROPHE,		// °
	0xc3, 0xa0, 0x00, 0x00, KEY_NONE,	KEY_APOSTROPHE,         // à	
	0xc3, 0xa7, 0x00, 0x00, KEY_MOD_LSHIFT, KEY_SEMICOLON,     	// ç
	0xc3, 0xa8, 0x00, 0x00, KEY_NONE,	KEY_LEFTBRACE,          // è
	0xc3, 0xa9, 0x00, 0x00, KEY_MOD_LSHIFT, KEY_LEFTBRACE,      	// é
	0xc3, 0xac, 0x00, 0x00, KEY_NONE,	KEY_EQUAL,              // ì
	0xc3, 0xb2, 0x00, 0x00, KEY_NONE,	KEY_SEMICOLON,		// ò
	0xc2, 0xa3, 0x00, 0x00, KEY_MOD_LSHIFT, KEY_3,              	// £
	0xc3, 0xb9, 0x00, 0x00, KEY_NONE, KEY_BACKSLASH,		// ù
	0xc2, 0xa7, 0x00, 0x00, KEY_MOD_LSHIFT, KEY_BACKSLASH,		// §
};

static hid_locale_t locale_it {
    	(uint8_t*)ascii_it, 128,
    	(uint8_t*)extended_ascii_it,  sizeof(extended_ascii_it) / 3,
    	(uint8_t*)utf8_it, sizeof(utf8_it) / 6
};
