#pragma once

/*---------------------------------------------------------------------------*/
/*                                Image Data                                 */
/*---------------------------------------------------------------------------*/

enum {
    IMG_ID_EMPTY = 0,
    IMG_ID_PLACEABLE,
    IMG_ID_BLACK,
    IMG_ID_WHITE,
    IMG_ID_BLACK_OUTSIDE,
    IMG_ID_WHITE_OUTSIDE,
};

#define IMG_STONE_W 11
#define IMG_STONE_H 8

PROGMEM static const uint8_t imgStone[6][11] = { // 11x8 x6
    { 0xAA, 0x54, 0xAA, 0x54, 0xAA, 0x54, 0xAA, 0x54, 0xAA, 0x54, 0xAA },
    { 0xAA, 0x54, 0xAA, 0x54, 0xBA, 0x6C, 0xBA, 0x54, 0xAA, 0x54, 0xAA },
    { 0xBA, 0x44, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x44, 0xBA },
    { 0xBA, 0x7C, 0x7C, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x7C, 0x7C, 0xBA },
    { 0x38, 0x44, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x44, 0x38 },
    { 0x38, 0x7C, 0x7C, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x7C, 0x7C, 0x38 },
};

#define IMG_FSTONE_W 11
#define IMG_FSTONE_H 16

PROGMEM static const uint8_t imgFlippingBase[16][22] = { // 11x16 x16
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x7C, 0x7C, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x7C, 0x7C, 0x38 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x78, 0xF8, 0xFC, 0xFC, 0xFE, 0x7E, 0x7E, 0x3E, 0x3C, 0x18 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x78, 0x78, 0xFC, 0xFC, 0x7C, 0x7E, 0x7E, 0x3C, 0x3C, 0x18 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x70, 0x70, 0x78, 0x78, 0x38, 0x3C, 0x3C, 0x1C, 0x1C, 0x08 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20, 0x30, 0x10, 0x18, 0x08, 0x0C, 0x04, 0x06, 0x02 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x30, 0x78, 0x7C, 0x3C, 0x3E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x03 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x38, 0x7C, 0x7E, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x07, 0x03 },
    { 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xE0, 0xC0, 0x1C, 0x3E, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x03, 0x01 },
    { 0x00, 0xC0, 0xE0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xE0, 0xC0, 0x0F, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x0F, 0x03 },
    { 0x00, 0xC0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xE0, 0xC0, 0x0F, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x0F, 0x03 },
    { 0xC0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF0, 0xC0, 0x07, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x07 },
    { 0xC0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0x03, 0x0F, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x0F },
    { 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1E },
    { 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1E },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3E, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0x7C, 0x38 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x7C, 0x7E, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x7C, 0x38 },
};

PROGMEM static const uint8_t imgFlippingFace[16][22] = { // 11x16 x16
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x38, 0x38, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x70, 0x78, 0x78, 0x7C, 0x3C, 0x3C, 0x1C, 0x18, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x78, 0x78, 0x38, 0x3C, 0x3C, 0x18, 0x18, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x30, 0x30, 0x10, 0x18, 0x18, 0x08, 0x08, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x38, 0x18, 0x1C, 0x0C, 0x0E, 0x06, 0x07, 0x03, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x38, 0x3C, 0x3E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x00 },
    { 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xC0, 0x00, 0x00, 0x1C, 0x3E, 0x3F, 0x1F, 0x1F, 0x0F, 0x0F, 0x03, 0x01, 0x00 },
    { 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x0F, 0x03, 0x00 },
    { 0x00, 0x00, 0xC0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x0F, 0x03, 0x00 },
    { 0x00, 0xC0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xC0, 0x00, 0x00, 0x07, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x07, 0x00 },
    { 0x00, 0xC0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x0F, 0x00 },
    { 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1E, 0x00 },
    { 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1E, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3E, 0x3E, 0x7E, 0x7E, 0x7E, 0x7C, 0x7C, 0x38, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x3C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x78, 0x38, 0x00 },
};

#define IMG_PLAYER_W 11
#define IMG_PLAYER_H 11

PROGMEM static const uint8_t imgPlayer[2][22] = { // 11x11 x2
    { 0x00, 0x00, 0x1C, 0xA2, 0x41, 0x01, 0x41, 0xA2, 0x1C, 0x00, 0x00, 0x00, 0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x06, 0x00 },
    { 0x54, 0xFE, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0xFE, 0x54, 0x01, 0x03, 0x06, 0x02, 0x06, 0x02, 0x06, 0x02, 0x06, 0x03, 0x01 },
};

/*---------------------------------------------------------------------------*/
/*                                Sound Data                                 */
/*---------------------------------------------------------------------------*/

enum {
    SND_PRIO_START = 0,
    SND_PRIO_RESULT,
    SND_PRIO_PASS,
    SND_PRIO_CANCEL,
    SND_PRIO_PLACE,
    SND_PRIO_FLIP,
};

PROGMEM static const byte soundStart[] = {
    0x90, 72, 0, 100, 0x90, 74, 0, 100, 0x90, 76, 0, 100,
    0x90, 77, 0, 100, 0x90, 79, 0, 200, 0x80, 0xF0
};

PROGMEM static const byte soundPlace[] = {
    0x90, 55, 0, 6, 0x90, 58, 0, 6, 0x90, 52, 0, 6, 0x90, 49, 0, 6,
    0x90, 55, 0, 6, 0x90, 58, 0, 6, 0x90, 52, 0, 6, 0x90, 49, 0, 6, 0x80, 0xF0
};

PROGMEM static const byte soundFlip[] = {
    0x90, 70, 0, 10, 0x90, 80, 0, 10, 0x90, 75, 0, 10,
    0x90, 85, 0, 10, 0x90, 80, 0, 10, 0x80, 0xF0
};

PROGMEM static const byte soundPass[] = {
    0x90, 84, 0, 30, 0x90, 85, 0, 30, 0x90, 86, 0, 30, 0x90, 87, 0, 30,
    0x90, 88, 0, 30, 0x90, 89, 0, 30, 0x90, 90, 0, 30, 0x90, 91, 0, 30, 0x80, 0xF0
};

PROGMEM static const byte soundCancel[] = {
    0x90, 72, 0, 40, 0x90, 69, 0, 40, 0x90, 65, 0, 40, 0x80, 0xF0
};

PROGMEM static const byte soundWin[] = {
    0x90, 81, 0, 40, 0x80, 0, 40, 0x90, 86, 0, 40, 0x80, 0, 40, 0x90, 90, 0, 40, 0x80, 0, 40, 0xE0
};

PROGMEM static const byte soundDraw[] = {
    0x90, 60, 0, 64, 0x80, 0, 64, 0xE0
};

PROGMEM static const byte soundLose[] = {
    0x90, 55, 0, 120, 0x90, 54, 0, 140, 0x90, 53, 0, 160, 0x90, 52, 0, 180,
    0x90, 51, 0, 200, 0x90, 50, 0, 220, 0x90, 49, 0, 240, 0x90, 48, 0, 260, 0x80, 0xF0
};

/*---------------------------------------------------------------------------*/
/*                            Evaluation Tables                              */
/*---------------------------------------------------------------------------*/

PROGMEM static const int8_t bitNumTable[256] = {
    0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
    1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
    1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
    2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
    1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
    2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
    2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
    3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 4, 5, 5, 6, 5, 6, 6, 7, 5, 6, 6, 7, 6, 7, 7, 8,
};

#define EVAL_INF    32767
#define EVAL_WIN    1000
#define EVAL_LOSE   -1000
#define EVAL_NOPLACEABLE -10

/*
    20 -8  0 -1 -1  0 -8 20
    -8-10 -2 -2 -2 -2-10 -8
     0 -2  0 -1 -1  0 -2  0  
    -1 -2 -1 -1 -1 -1 -2 -1
    -1 -2 -1 -1 -1 -1 -2 -1
     0 -2  0 -1 -1  0 -2  0  
    -8-10 -2 -2 -2 -2-10 -8
    20 -8  0 -1 -1  0 -8 20
*/
PROGMEM static const int8_t evalStonesTable[4][32] = {
    {
        0, 20, -8, 12,  0, 20, -8, 12, -1, 19, -9, 11, -1, 19, -9, 11,
        0, -1,  0, -1, -8, -9, -8, -9, 20, 19, 20, 19, 12, 11, 12, 11,
    },{
        0, -8,-10,-18, -2,-10,-12,-20, -2,-10,-12,-20, -4,-12,-14,-22,
        0, -2, -2, -4,-10,-12,-12,-14, -8,-10,-10,-12,-18,-20,-20,-22,
    },{
        0,  0, -2, -2,  0,  0, -2, -2, -1, -1, -3, -3, -1, -1, -3, -3,
        0, -1,  0, -1, -2, -3, -2, -3,  0, -1,  0, -1, -2, -3, -2, -3,
    },{
        0, -1, -2, -3, -1, -2, -3, -4, -1, -2, -3, -4, -2, -3, -4, -5,
        0, -1, -1, -2, -2, -3, -3, -4, -1, -2, -2, -3, -3, -4, -4, -5,
    }
};

/*
    20 16 12  8  8 12 16 20
    16 12  8  5  5  8 12 16
    12  8  5  3  3  5  8 12
     8  5  3  3  3  3  5  8
     8  5  3  3  3  3  5  8
    12  8  5  3  3  5  8 12
    16 12  8  5  5  8 12 16
    20 16 12  8  8 12 16 20
*/
PROGMEM static const int8_t evalFixedStonesTable[4][32] = {
    {
        0, 20, 16, 36, 12, 32, 28, 48,  8, 28, 24, 44, 20, 40, 36, 56,
        0,  8, 12, 20, 16, 24, 28, 36, 20, 28, 32, 40, 36, 44, 48, 56,
    },{
        0, 16, 12, 28,  8, 24, 20, 36,  5, 21, 17, 33, 13, 29, 25, 41,
        0,  5,  8, 13, 12, 17, 20, 25, 16, 21, 24, 29, 28, 33, 36, 41,
    },{
        0, 12,  8, 20,  5, 17, 13, 25,  3, 15, 11, 23,  8, 20, 16, 28,
        0,  3,  5,  8,  8, 11, 13, 16, 12, 15, 17, 20, 20, 23, 25, 28,
    },{
        0,  8,  5, 13,  3, 11,  8, 16,  3, 11,  8, 16,  6, 14, 11, 19,
        0,  3,  3,  6,  5,  8,  8, 11,  8, 11, 11, 14, 13, 16, 16, 19,
    }
};
