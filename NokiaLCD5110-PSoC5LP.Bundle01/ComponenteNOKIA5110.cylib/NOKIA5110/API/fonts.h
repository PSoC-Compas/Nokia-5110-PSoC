#ifndef `$INSTANCE_NAME`_FONTS_H_
#define `$INSTANCE_NAME`_FONTS_H_
    
/***************************************************************************
* character generator
* This table defines the standard ASCII characters in a 3x5 dot format.
***************************************************************************/
static const char  SmallFront[106][3] = {
	{ 0x00, 0x00, 0x00 },   // sp - 32
	{ 0x00, 0x17, 0x00 },   // ! - 33
	{ 0x03, 0x00, 0x03 },   // " - 34
	{ 0x1F, 0x0A, 0x1F },   // # - 35
	{ 0x0A, 0x1F, 0x05 },   // $
	{ 0x09, 0x04, 0x12 },   // %
	{ 0x0F, 0x17, 0x1C },   // &
	{ 0x00, 0x03, 0x00 },   // '
	{ 0x00, 0x0E, 0x11 },   // ( - 40
	{ 0x11, 0x0E, 0x00 },   // )
	{ 0x05, 0x02, 0x05 },   // *
	{ 0x04, 0x0E, 0x04 },   // +
	{ 0x10, 0x08, 0x00 },   // ,
	{ 0x04, 0x04, 0x04 },   // - - 45
	{ 0x00, 0x10, 0x00 },   // .
	{ 0x08, 0x04, 0x02 },   // /
	{ 0x1F, 0x11, 0x1F },   // 0
	{ 0x12, 0x1F, 0x10 },   // 1
	{ 0x1D, 0x15, 0x17 },   // 2 - 50
	{ 0x11, 0x15, 0x1F },   // 3
	{ 0x07, 0x04, 0x1F },   // 4
	{ 0x17, 0x15, 0x1D },   // 5
	{ 0x1F, 0x15, 0x1D },   // 6
	{ 0x01, 0x01, 0x1F },   // 7 - 55
	{ 0x1F, 0x15, 0x1F },   // 8
	{ 0x17, 0x15, 0x1F },   // 9 - 57
	{ 0x00, 0x0A, 0x00 },   // :
	{ 0x10, 0x0A, 0x00 },   // ;
	{ 0x04, 0x0A, 0x11 },   // < - 60
	{ 0x0A, 0x0A, 0x0A },   // =
	{ 0x11, 0x0A, 0x04 },   // >
	{ 0x01, 0x15, 0x03 },   // ?
	{ 0x0E, 0x15, 0x16 },   // @
	{ 0x1E, 0x05, 0x1E },   // A - 65
	{ 0x1F, 0x15, 0x0A },   // B
	{ 0x0E, 0x11, 0x11 },   // C
	{ 0x1F, 0x11, 0x0E },   // D
	{ 0x1F, 0x15, 0x15 },   // E
	{ 0x1F, 0x05, 0x05 },   // F - 70
	{ 0x0E, 0x15, 0x1D },   // G
	{ 0x1F, 0x04, 0x1F },   // H
	{ 0x11, 0x1F, 0x11 },   // I
	{ 0x08, 0x10, 0x0F },   // J
	{ 0x1F, 0x04, 0x1B },   // K - 75
	{ 0x1F, 0x10, 0x10 },   // L
	{ 0x1F, 0x06, 0x1F },   // M
	{ 0x1F, 0x0E, 0x1F },   // N
	{ 0x0E, 0x11, 0x0E },   // O
	{ 0x1F, 0x05, 0x02 },   // P - 80
	{ 0x0E, 0x11, 0x1E },   // Q
	{ 0x1F, 0x0D, 0x16 },   // R
	{ 0x12, 0x15, 0x09 },   // S
	{ 0x01, 0x1F, 0x01 },   // T
	{ 0x0F, 0x10, 0x0F },   // U - 85
	{ 0x07, 0x18, 0x07 },   // V
	{ 0x1F, 0x0C, 0x1F },   // W
	{ 0x1B, 0x04, 0x1B },   // X
	{ 0x03, 0x1C, 0x03 },   // Y
	{ 0x19, 0x15, 0x13 },   // Z - 90
	{ 0x1F, 0x11, 0x00 },   // [
	{ 0x02, 0x04, 0x08 },   // 55 - backspace - 92
	{ 0x00, 0x11, 0x1F },   // ]
	{ 0x02, 0x01, 0x02 },   // ^
	{ 0x10, 0x10, 0x10 },   // _ - 95
	{ 0x01, 0x02, 0x00 },   // `
	{ 0x1A, 0x16, 0x1C },   // a
	{ 0x1F, 0x12, 0x0C },   // b
	{ 0x0C, 0x12, 0x12 },   // c
	{ 0x0C, 0x12, 0x1F },   // d - 100
	{ 0x0C, 0x1A, 0x16 },   // e
	{ 0x04, 0x1E, 0x05 },   // f
	{ 0x06, 0x15, 0x0F },   // g
	{ 0x1F, 0x02, 0x1C },   // h
	{ 0x00, 0x1D, 0x00 },   // i - 105
	{ 0x10, 0x10, 0x0D },   // j
	{ 0x1F, 0x0C, 0x12 },   // k
	{ 0x11, 0x1F, 0x10 },   // l
	{ 0x1E, 0x0E, 0x1E },   // m
	{ 0x1E, 0x02, 0x1C },   // n - 110
	{ 0x0C, 0x12, 0x0C },   // o
	{ 0x1E, 0x0A, 0x04 },   // p
	{ 0x04, 0x0A, 0x1E },   // q
	{ 0x1C, 0x02, 0x02 },   // r
	{ 0x14, 0x1E, 0x0A },   // s - 115
	{ 0x02, 0x1F, 0x12 },   // t
	{ 0x0E, 0x10, 0x1E },   // u
	{ 0x0E, 0x10, 0x0E },   // v
	{ 0x1E, 0x1C, 0x1E },   // w
	{ 0x12, 0x0C, 0x12 },   // x - 120
	{ 0x02, 0x14, 0x1E },   // y
	{ 0x1A, 0x1E, 0x16 },   // z
	{ 0x04, 0x1B, 0x11 },   // {
	{ 0x00, 0x1F, 0x00 },   // |
	{ 0x11, 0x1B, 0x04 },   // }
	{ 0x04, 0x06, 0x02 },   // ~
	{ 0x1F, 0x1F, 0x1F },   // delete
};

/***************************************************************************
* character generator
* This table defines the standard ASCII characters in a 5x7 dot format.
***************************************************************************/
static const char MiddleFont [102][5] =
{
  { 0x00, 0x00, 0x00, 0x00, 0x00 }, // 20 space
  { 0x00, 0x00, 0x5f, 0x00, 0x00 },  // 21 !
  { 0x00, 0x07, 0x00, 0x07, 0x00 },  // 22 "
  { 0x14, 0x7f, 0x14, 0x7f, 0x14 },  // 23 #
  { 0x24, 0x2a, 0x7f, 0x2a, 0x12 },  // 24 $
  { 0x23, 0x13, 0x08, 0x64, 0x62 },  // 25 %
  { 0x36, 0x49, 0x55, 0x22, 0x50 },  // 26 &
  { 0x00, 0x05, 0x03, 0x00, 0x00 },  // 27 '
  { 0x00, 0x1c, 0x22, 0x41, 0x00 },  // 28 (
  { 0x00, 0x41, 0x22, 0x1c, 0x00 },  // 29 )
  { 0x14, 0x08, 0x3e, 0x08, 0x14 },  // 2a *
  { 0x08, 0x08, 0x3e, 0x08, 0x08 },  // 2b +
  { 0x00, 0x50, 0x30, 0x00, 0x00 },  // 2c ,
  { 0x08, 0x08, 0x08, 0x08, 0x08 },  // 2d -
  { 0x00, 0x60, 0x60, 0x00, 0x00 },  // 2e .
  { 0x20, 0x10, 0x08, 0x04, 0x02 },  // 2f /
  { 0x3e, 0x51, 0x49, 0x45, 0x3e },  // 30 0
  { 0x00, 0x42, 0x7f, 0x40, 0x00 },  // 31 1
  { 0x42, 0x61, 0x51, 0x49, 0x46 },  // 32 2
  { 0x21, 0x41, 0x45, 0x4b, 0x31 },  // 33 3
  { 0x18, 0x14, 0x12, 0x7f, 0x10 },  // 34 4
  { 0x27, 0x45, 0x45, 0x45, 0x39 },  // 35 5
  { 0x3c, 0x4a, 0x49, 0x49, 0x30 },  // 36 6
  { 0x01, 0x71, 0x09, 0x05, 0x03 },  // 37 7
  { 0x36, 0x49, 0x49, 0x49, 0x36 },  // 38 8
  { 0x06, 0x49, 0x49, 0x29, 0x1e },  // 39 9
  { 0x00, 0x36, 0x36, 0x00, 0x00 },  // 3a :
  { 0x00, 0x56, 0x36, 0x00, 0x00 },  // 3b ;
  { 0x08, 0x14, 0x22, 0x41, 0x00 },  // 3c <
  { 0x14, 0x14, 0x14, 0x14, 0x14 },  // 3d =
  { 0x00, 0x41, 0x22, 0x14, 0x08 },  // 3e >
  { 0x02, 0x01, 0x51, 0x09, 0x06 },  // 3f ?
  { 0x32, 0x49, 0x79, 0x41, 0x3e },  // 40 @
  { 0x7e, 0x11, 0x11, 0x11, 0x7e },  // 41 A
  { 0x7f, 0x49, 0x49, 0x49, 0x36 },  // 42 B
  { 0x3e, 0x41, 0x41, 0x41, 0x22 },  // 43 C
  { 0x7f, 0x41, 0x41, 0x22, 0x1c },  // 44 D
  { 0x7f, 0x49, 0x49, 0x49, 0x41 },  // 45 E
  { 0x7f, 0x09, 0x09, 0x09, 0x01 },  // 46 F
  { 0x3e, 0x41, 0x49, 0x49, 0x7a },  // 47 G
  { 0x7f, 0x08, 0x08, 0x08, 0x7f },  // 48 H
  { 0x00, 0x41, 0x7f, 0x41, 0x00 },  // 49 I
  { 0x20, 0x40, 0x41, 0x3f, 0x01 },  // 4a J
  { 0x7f, 0x08, 0x14, 0x22, 0x41 },  // 4b K
  { 0x7f, 0x40, 0x40, 0x40, 0x40 },  // 4c L
  { 0x7f, 0x02, 0x0c, 0x02, 0x7f },  // 4d M
  { 0x7f, 0x04, 0x08, 0x10, 0x7f },  // 4e N
  { 0x3e, 0x41, 0x41, 0x41, 0x3e },  // 4f O
  { 0x7f, 0x09, 0x09, 0x09, 0x06 },  // 50 P
  { 0x3e, 0x41, 0x51, 0x21, 0x5e },  // 51 Q
  { 0x7f, 0x09, 0x19, 0x29, 0x46 },  // 52 R
  { 0x46, 0x49, 0x49, 0x49, 0x31 },  // 53 S
  { 0x01, 0x01, 0x7f, 0x01, 0x01 },  // 54 T
  { 0x3f, 0x40, 0x40, 0x40, 0x3f },  // 55 U
  { 0x1f, 0x20, 0x40, 0x20, 0x1f },  // 56 V
  { 0x3f, 0x40, 0x38, 0x40, 0x3f },  // 57 W
  { 0x63, 0x14, 0x08, 0x14, 0x63 },  // 58 X
  { 0x07, 0x08, 0x70, 0x08, 0x07 },  // 59 Y
  { 0x61, 0x51, 0x49, 0x45, 0x43 },  // 5a Z
  { 0x00, 0x7f, 0x41, 0x41, 0x00 },  // 5b [
  { 0x02, 0x04, 0x08, 0x10, 0x20 },  // 5c backslash 
  { 0x00, 0x41, 0x41, 0x7f, 0x00 },  // 5d ]
  { 0x04, 0x02, 0x01, 0x02, 0x04 },  // 5e ^
  { 0x40, 0x40, 0x40, 0x40, 0x40 },  // 5f _
  { 0x00, 0x01, 0x02, 0x04, 0x00 },  // 60 `
  { 0x20, 0x54, 0x54, 0x54, 0x78 },  // 61 a
  { 0x7f, 0x48, 0x44, 0x44, 0x38 },  // 62 b
  { 0x38, 0x44, 0x44, 0x44, 0x20 },  // 63 c
  { 0x38, 0x44, 0x44, 0x48, 0x7f },  // 64 d
  { 0x38, 0x54, 0x54, 0x54, 0x18 },  // 65 e
  { 0x08, 0x7e, 0x09, 0x01, 0x02 },  // 66 f
  { 0x0c, 0x52, 0x52, 0x52, 0x3e },  // 67 g
  { 0x7f, 0x08, 0x04, 0x04, 0x78 },  // 68 h
  { 0x00, 0x44, 0x7d, 0x40, 0x00 },  // 69 i
  { 0x20, 0x40, 0x44, 0x3d, 0x00 },  // 6a j 
  { 0x7f, 0x10, 0x28, 0x44, 0x00 },  // 6b k
  { 0x00, 0x41, 0x7f, 0x40, 0x00 },  // 6c l
  { 0x7c, 0x04, 0x18, 0x04, 0x78 },  // 6d m
  { 0x7c, 0x08, 0x04, 0x04, 0x78 },  // 6e n
  { 0x38, 0x44, 0x44, 0x44, 0x38 },  // 6f o
  { 0x7c, 0x14, 0x14, 0x14, 0x08 },  // 70 p
  { 0x08, 0x14, 0x14, 0x18, 0x7c },  // 71 q
  { 0x7c, 0x08, 0x04, 0x04, 0x08 },  // 72 r
  { 0x48, 0x54, 0x54, 0x54, 0x20 },  // 73 s
  { 0x04, 0x3f, 0x44, 0x40, 0x20 },  // 74 t
  { 0x3c, 0x40, 0x40, 0x20, 0x7c },  // 75 u
  { 0x1c, 0x20, 0x40, 0x20, 0x1c },  // 76 v
  { 0x3c, 0x40, 0x30, 0x40, 0x3c },  // 77 w
  { 0x44, 0x28, 0x10, 0x28, 0x44 },  // 78 x
  { 0x0c, 0x50, 0x50, 0x50, 0x3c },  // 79 y
  { 0x44, 0x64, 0x54, 0x4c, 0x44 },  // 7a z
  { 0x00, 0x08, 0x36, 0x41, 0x00 },  // 7b {
  { 0x00, 0x00, 0x7f, 0x00, 0x00 },  // 7c |
  { 0x00, 0x41, 0x36, 0x08, 0x00 },  // 7d }
  { 0x10, 0x08, 0x08, 0x10, 0x08 },  // 7e ~
  { 0x00, 0x00, 0x00, 0x00, 0x00 },  // 7f 
  { 0x00, 0x7F, 0x3E, 0x1C, 0x08 },  // 80 > Filled		
  { 0x08, 0x1C, 0x3E, 0x7F, 0x00 },  // 81 < Filled	
  { 0x08, 0x7C, 0x7E, 0x7C, 0x08 },  // 82 Arrow up		
  { 0x10, 0x3E, 0x7E, 0x3E, 0x10 },  // 83 Arrow down	
  { 0x3E, 0x3E, 0x3E, 0x3E, 0x3E },  // 84 Stop			
  { 0x00, 0x7F, 0x3E, 0x1C, 0x08 }   // 85 Play			
};
/***************************************************************************
* Character generator
* This table defines the standard ASCII characters in a 8x15 dot format.
***************************************************************************/
static const char BigFont [][8][2] =
{
{ {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00} } , // sp
{ {0x00, 0x00}, {0x00, 0x00}, {0x3E, 0x00}, {0xFF, 0x0D}, {0xFF, 0x0D}, {0x3E, 0x00}, {0x00, 0x00}, {0x00, 0x00} } , // ! 
{ {0x00, 0x00}, {0x04, 0x00}, {0x07, 0x00}, {0x03, 0x00}, {0x00, 0x00}, {0x04, 0x00}, {0x07, 0x00}, {0x03, 0x00} } , // "
{ {0x10, 0x01}, {0xFE, 0x0F}, {0xFE, 0x0F}, {0x10, 0x01}, {0x10, 0x01}, {0xFE, 0x0F}, {0xFE, 0x0F}, {0x10, 0x01} } , // #
{ {0x1C, 0x03}, {0x3E, 0x07}, {0x22, 0x04}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x42, 0x04}, {0xCE, 0x07}, {0x8C, 0x03} } , // $
{ {0x00, 0x00}, {0x00, 0x04}, {0x06, 0x07}, {0xC6, 0x03}, {0xF0, 0x00}, {0x3C, 0x06}, {0x0E, 0x06}, {0x02, 0x00} } , // %
{ {0x1E, 0x06}, {0x3F, 0x0F}, {0xE1, 0x09}, {0xC1, 0x09}, {0x41, 0x0B}, {0x21, 0x0C}, {0x3F, 0x1E}, {0x1E, 0x16} } , // &
{ {0x00, 0x00}, {0x00, 0x00}, {0x04, 0x00}, {0x07, 0x00}, {0x03, 0x00}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00} } , // '
{ {0x00, 0x00}, {0x00, 0x00}, {0xF8, 0x01}, {0xFE, 0x07}, {0x07, 0x0E}, {0x01, 0x08}, {0x00, 0x00}, {0x00, 0x00} } , // (
{ {0x00, 0x00}, {0x00, 0x00}, {0x01, 0x08}, {0x07, 0x0E}, {0xFE, 0x07}, {0xF8, 0x01}, {0x00, 0x00}, {0x00, 0x00} } , // )
{ {0x20, 0x00}, {0xA8, 0x00}, {0xF8, 0x00}, {0x70, 0x00}, {0x70, 0x00}, {0xF8, 0x00}, {0xA8, 0x00}, {0x20, 0x00} } , // *
{ {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00}, {0xFC, 0x01}, {0xFC, 0x01}, {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00} } , // +
{ {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x20}, {0x00, 0x3C}, {0x00, 0x1C}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00} } , // ,
{ {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00} } , // -
{ {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x0C}, {0x00, 0x0C}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00} } , // .
{ {0x00, 0x00}, {0x00, 0x0C}, {0x00, 0x0F}, {0xC0, 0x03}, {0xF0, 0x00}, {0x3C, 0x00}, {0x0F, 0x00}, {0x03, 0x00} } , // /
{ {0xFE, 0x07}, {0xFF, 0x0F}, {0x01, 0x08}, {0x01, 0x08}, {0x01, 0x08}, {0x01, 0x08}, {0xFF, 0x0F}, {0xFE, 0x07} } , // 0
{ {0x00, 0x00}, {0x04, 0x08}, {0x06, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x00, 0x08}, {0x00, 0x08}, {0x00, 0x00} } , // 1
{ {0x02, 0x0E}, {0x03, 0x0F}, {0x81, 0x09}, {0xC1, 0x08}, {0x61, 0x08}, {0x31, 0x08}, {0x1F, 0x08}, {0x0E, 0x0C} } , // 2
{ {0x02, 0x04}, {0x03, 0x0C}, {0x01, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0xFF, 0x0F}, {0xDE, 0x07} } , // 3
{ {0xE0, 0x00}, {0xF0, 0x00}, {0x98, 0x00}, {0x8C, 0x00}, {0x86, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x00, 0x08} } , // 4  
{ {0x3F, 0x04}, {0x3F, 0x0C}, {0x21, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0xE1, 0x0F}, {0xC1, 0x07} } , // 5
{ {0xFC, 0x07}, {0xFE, 0x0F}, {0x23, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0xE0, 0x0F}, {0xC0, 0x07} } , // 6
{ {0x03, 0x00}, {0x03, 0x00}, {0x01, 0x00}, {0x81, 0x0F}, {0xE1, 0x0F}, {0x79, 0x00}, {0x1F, 0x00}, {0x07, 0x00} } , // 7
{ {0xDE, 0x07}, {0xFF, 0x0F}, {0x21, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0xFF, 0x0F}, {0xDE, 0x07} } , // 8
{ {0x1E, 0x00}, {0x3F, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0x21, 0x0C}, {0xFF, 0x07}, {0xFE, 0x03} } , // 9
{ {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00}, {0x18, 0x06}, {0x18, 0x06}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00} } , // :
{ {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x10}, {0x18, 0x1E}, {0x18, 0x0E}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00} } , // ;
{ {0x40, 0x00}, {0xE0, 0x00}, {0xB0, 0x01}, {0x18, 0x03}, {0x0C, 0x06}, {0x06, 0x0C}, {0x02, 0x08}, {0x00, 0x00} } , // <
{ {0x00, 0x00}, {0xA0, 0x00}, {0xA0, 0x00}, {0xA0, 0x00}, {0xA0, 0x00}, {0xA0, 0x00}, {0xA0, 0x00}, {0x00, 0x00} } , // =
{ {0x00, 0x00}, {0x02, 0x08}, {0x06, 0x0C}, {0x0C, 0x06}, {0x18, 0x03}, {0xB0, 0x01}, {0xE0, 0x00}, {0x40, 0x00} } , // >
{ {0x02, 0x00}, {0x03, 0x00}, {0x01, 0x00}, {0xC1, 0x0D}, {0xE1, 0x0D}, {0x31, 0x00}, {0x1F, 0x00}, {0x0E, 0x00} } , // ?
{ {0x02, 0x00}, {0x03, 0x00}, {0x01, 0x00}, {0xC1, 0x0D}, {0xE1, 0x0D}, {0x31, 0x00}, {0x1F, 0x00}, {0x0E, 0x00} } , // @
{ {0xF8, 0x0F}, {0xFC, 0x0F}, {0x86, 0x00}, {0x83, 0x00}, {0x83, 0x00}, {0x86, 0x00}, {0xFC, 0x0F}, {0xF8, 0x0F} } , // A
{ {0xFF, 0x0F}, {0xFF, 0x0F}, {0x21, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0xFF, 0x0F}, {0xDE, 0x07} } , // B
{ {0xFC, 0x03}, {0xFE, 0x07}, {0x03, 0x0C}, {0x01, 0x08}, {0x01, 0x08}, {0x01, 0x08}, {0x03, 0x0C}, {0x06, 0x06} } , // C
{ {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x01, 0x08}, {0x01, 0x08}, {0x03, 0x0C}, {0xFE, 0x07}, {0xFC, 0x03} } , // D
{ {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x21, 0x08}, {0x21, 0x08}, {0x71, 0x08}, {0x03, 0x0C}, {0x03, 0x0C} } , // E
{ {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x21, 0x08}, {0x21, 0x00}, {0x71, 0x00}, {0x03, 0x00}, {0x03, 0x00} } , // F
{ {0xFC, 0x03}, {0xFE, 0x07}, {0x03, 0x0C}, {0x01, 0x08}, {0x41, 0x08}, {0x41, 0x08}, {0xC3, 0x07}, {0xC6, 0x0F} } , // G
{ {0xFF, 0x0F}, {0xFF, 0x0F}, {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00}, {0xFF, 0x0F}, {0xFF, 0x0F} } , // H
{ {0x00, 0x00}, {0x01, 0x08}, {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x01, 0x08}, {0x01, 0x08}, {0x00, 0x00} } , // I
{ {0x00, 0x06}, {0x00, 0x0E}, {0x00, 0x08}, {0x00, 0x08}, {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x07}, {0x01, 0x00} } , // J
{ {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x70, 0x00}, {0xD8, 0x00}, {0x8C, 0x01}, {0x07, 0x0F}, {0x03, 0x0E} } , // K
{ {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x01, 0x08}, {0x00, 0x08}, {0x00, 0x08}, {0x00, 0x0C}, {0x00, 0x0C} } , // L
{ {0xFF, 0x0F}, {0xFF, 0x0F}, {0x0C, 0x00}, {0x78, 0x00}, {0x78, 0x00}, {0x0C, 0x00}, {0xFF, 0x0F}, {0xFF, 0x0F} } , // M
{ {0xFF, 0x0F}, {0xFF, 0x0F}, {0x1C, 0x00}, {0x38, 0x00}, {0x70, 0x00}, {0xE0, 0x00}, {0xFF, 0x0F}, {0xFF, 0x0F} } , // N
{ {0xFE, 0x07}, {0xFF, 0x0F}, {0x01, 0x08}, {0x01, 0x08}, {0x01, 0x08}, {0x01, 0x08}, {0xFF, 0x0F}, {0xFE, 0x07} } , // O
{ {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x21, 0x08}, {0x21, 0x00}, {0x21, 0x00}, {0x3F, 0x00}, {0x1E, 0x00} } , // P
{ {0xFE, 0x07}, {0xFF, 0x0F}, {0x01, 0x08}, {0x01, 0x0E}, {0x01, 0x1C}, {0x01, 0x38}, {0xFF, 0x2F}, {0xFE, 0x07} } , // Q
{ {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x21, 0x08}, {0x21, 0x00}, {0x61, 0x00}, {0xFF, 0x0F}, {0x9E, 0x0F} } , // R
{ {0x0E, 0x06}, {0x1F, 0x0E}, {0x31, 0x08}, {0x21, 0x08}, {0x21, 0x08}, {0x61, 0x08}, {0xC7, 0x0F}, {0x86, 0x07} } , // S
{ {0x03, 0x00}, {0x03, 0x00}, {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x01, 0x08}, {0x03, 0x00}, {0x03, 0x00} } , // T
{ {0xFF, 0x07}, {0xFF, 0x0F}, {0x00, 0x08}, {0x00, 0x08}, {0x00, 0x08}, {0x00, 0x08}, {0xFF, 0x0F}, {0xFF, 0x07} } , // U
{ {0xFF, 0x01}, {0xFF, 0x03}, {0x00, 0x06}, {0x00, 0x0C}, {0x00, 0x0C}, {0x00, 0x06}, {0xFF, 0x03}, {0xFF, 0x01} } , // V
{ {0xFF, 0x01}, {0xFF, 0x0F}, {0x00, 0x0E}, {0xE0, 0x03}, {0xE0, 0x03}, {0x00, 0x0E}, {0xFF, 0x0F}, {0xFF, 0x01} } , // W
{ {0x07, 0x0E}, {0x0F, 0x0F}, {0x98, 0x01}, {0xF0, 0x00}, {0xF0, 0x00}, {0x98, 0x01}, {0x0F, 0x0F}, {0x07, 0x0E} } , // X
{ {0x0F, 0x00}, {0x1F, 0x00}, {0x30, 0x08}, {0xE0, 0x0F}, {0xE0, 0x0F}, {0x30, 0x08}, {0x1F, 0x00}, {0x0F, 0x00} } , // Y
{ {0x03, 0x0F}, {0x83, 0x0F}, {0xC1, 0x08}, {0x61, 0x08}, {0x31, 0x08}, {0x19, 0x08}, {0x0F, 0x0C}, {0x07, 0x0C} } , // Z
{ {0x00, 0x00}, {0x00, 0x00}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x01, 0x08}, {0x01, 0x08}, {0x00, 0x00}, {0x00, 0x00} } , // [
{ {0x55, 0x55}, {0xAA, 0xAA}, {0x55, 0x55}, {0xAA, 0xAA}, {0x55, 0x55}, {0xAA, 0xAA}, {0x55, 0x55}, {0xAA, 0xAA} } , // 55
{ {0x00, 0x00}, {0x00, 0x00}, {0x01, 0x08}, {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x00, 0x00}, {0x00, 0x00} } , // ]
{ {0x08, 0x00}, {0x0C, 0x00}, {0x06, 0x00}, {0x03, 0x00}, {0x03, 0x00}, {0x06, 0x00}, {0x0C, 0x00}, {0x08, 0x00} } , // ^
{ {0x00, 0x40}, {0x00, 0x40}, {0x00, 0x40}, {0x00, 0x40}, {0x00, 0x40}, {0x00, 0x40}, {0x00, 0x40}, {0x00, 0x40} } , // _
{ {0x00, 0x00}, {0x00, 0x00}, {0x08, 0x00}, {0x0F, 0x00}, {0x07, 0x00}, {0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00} } , // `
{ {0x00, 0x07}, {0x90, 0x0F}, {0x90, 0x08}, {0x90, 0x08}, {0x90, 0x08}, {0xF0, 0x07}, {0xE0, 0x0F}, {0x00, 0x08} } , // a
{ {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x07}, {0x10, 0x08}, {0x10, 0x08}, {0x30, 0x08}, {0xE0, 0x0F}, {0xC0, 0x07} } , // b
{ {0xE0, 0x07}, {0xF0, 0x0F}, {0x10, 0x08}, {0x10, 0x08}, {0x10, 0x08}, {0x10, 0x08}, {0x30, 0x0C}, {0x20, 0x04} } , // c
{ {0xC0, 0x07}, {0xE0, 0x0F}, {0x30, 0x08}, {0x10, 0x08}, {0x11, 0x08}, {0xFF, 0x07}, {0xFF, 0x0F}, {0x00, 0x08} } , // d
{ {0xE0, 0x07}, {0xF0, 0x0F}, {0x90, 0x08}, {0x90, 0x08}, {0x90, 0x08}, {0x90, 0x08}, {0xF0, 0x0C}, {0xE0, 0x04} } , // e
{ {0x00, 0x00}, {0x10, 0x08}, {0xFE, 0x0F}, {0xFF, 0x0F}, {0x11, 0x08}, {0x11, 0x00}, {0x03, 0x00}, {0x02, 0x00} } , // f
{ {0xE0, 0x27}, {0xF0, 0x6F}, {0x10, 0x48}, {0x10, 0x48}, {0x10, 0x48}, {0xE0, 0x7F}, {0xF0, 0x3F}, {0x10, 0x00} } , // g
{ {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x20, 0x00}, {0x10, 0x00}, {0x10, 0x00}, {0xF0, 0x0F}, {0xE0, 0x0F} } , // h
{ {0x00, 0x00}, {0x10, 0x08}, {0x10, 0x08}, {0xF6, 0x0F}, {0xF6, 0x0F}, {0x00, 0x08}, {0x00, 0x08}, {0x00, 0x00} } , // i
{ {0x00, 0x30}, {0x00, 0x60}, {0x10, 0x40}, {0x10, 0x40}, {0xF6, 0x7F}, {0xF6, 0x3F}, {0x00, 0x00}, {0x00, 0x00} } , // j
{ {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0xC0, 0x00}, {0xC0, 0x01}, {0x60, 0x03}, {0x30, 0x0E}, {0x10, 0x0C} } , // k
{ {0x00, 0x00}, {0x01, 0x08}, {0x01, 0x08}, {0xFF, 0x0F}, {0xFF, 0x0F}, {0x00, 0x08}, {0x00, 0x08}, {0x00, 0x00} } , // l
{ {0xF0, 0x0F}, {0xF0, 0x0F}, {0x30, 0x00}, {0xE0, 0x07}, {0xE0, 0x07}, {0x30, 0x00}, {0xF0, 0x0F}, {0xE0, 0x0F} } , // m
{ {0x10, 0x00}, {0xF0, 0x0F}, {0xE0, 0x0F}, {0x10, 0x00}, {0x10, 0x00}, {0x10, 0x00}, {0xF0, 0x0F}, {0xE0, 0x0F} } , // n
{ {0xE0, 0x07}, {0xF0, 0x0F}, {0x10, 0x08}, {0x10, 0x08}, {0x10, 0x08}, {0x10, 0x08}, {0xF0, 0x0F}, {0xE0, 0x07} } , // o
{ {0x10, 0x40}, {0xF0, 0x7F}, {0xE0, 0x7F}, {0x10, 0x48}, {0x10, 0x08}, {0x10, 0x08}, {0xF0, 0x0F}, {0xE0, 0x07} } , // p
{ {0xE0, 0x07}, {0xF0, 0x0F}, {0x10, 0x08}, {0x10, 0x08}, {0x10, 0x48}, {0xE0, 0x7F}, {0xF0, 0x7F}, {0x10, 0x40} } , // q
{ {0x10, 0x00}, {0xF0, 0x0F}, {0xE0, 0x0F}, {0x10, 0x00}, {0x10, 0x00}, {0x10, 0x00}, {0x30, 0x00}, {0x20, 0x00} } , // r
{ {0x60, 0x04}, {0xF0, 0x0C}, {0x90, 0x08}, {0x90, 0x08}, {0x90, 0x09}, {0x10, 0x09}, {0x30, 0x0F}, {0x20, 0x06} } , // s
{ {0x10, 0x00}, {0x10, 0x00}, {0xFE, 0x07}, {0xFF, 0x0F}, {0x10, 0x08}, {0x10, 0x0C}, {0x00, 0x04}, {0x00, 0x00} } , // t
{ {0xF0, 0x07}, {0xF0, 0x0F}, {0x00, 0x08}, {0x00, 0x08}, {0x00, 0x08}, {0xF0, 0x07}, {0xF0, 0x0F}, {0x00, 0x08} } , // u
{ {0xF0, 0x01}, {0xF0, 0x03}, {0x00, 0x06}, {0x00, 0x0C}, {0x00, 0x0C}, {0x00, 0x06}, {0xF0, 0x03}, {0xF0, 0x01} } , // v
{ {0xF0, 0x07}, {0xF0, 0x0F}, {0x00, 0x0C}, {0x80, 0x07}, {0x80, 0x07}, {0x00, 0x0C}, {0xF0, 0x0F}, {0xF0, 0x07} } , // w
{ {0x10, 0x08}, {0x30, 0x0C}, {0x60, 0x06}, {0xC0, 0x03}, {0xC0, 0x03}, {0x60, 0x06}, {0x30, 0x0C}, {0x10, 0x08} } , // x
{ {0xF0, 0x47}, {0xF0, 0x4F}, {0x00, 0x48}, {0x00, 0x48}, {0x00, 0x48}, {0x00, 0x68}, {0xF0, 0x3F}, {0xF0, 0x1F} } , // y
{ {0x30, 0x0C}, {0x30, 0x0E}, {0x10, 0x0B}, {0x90, 0x09}, {0xD0, 0x08}, {0x70, 0x08}, {0x30, 0x0C}, {0x10, 0x0C} }   // z
};

/* `#START USER_FONTS` */
/* Add your custom fonts here */

/* `#END` */

#endif /* `$INSTANCE_NAME`_FONTS_H_ */