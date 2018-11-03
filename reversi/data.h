#pragma once

/*---------------------------------------------------------------------------*/
/*                                Image Data                                 */
/*---------------------------------------------------------------------------*/

PROGMEM static const uint8_t imgStoneBase[16][24] = { // 12x16 x16
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x7C, 0x7C, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x7C, 0x7C, 0x38, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x78, 0xF8, 0xFC, 0xFC, 0xFE, 0x7E, 0x7E, 0x3E, 0x3C, 0x18, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x78, 0x78, 0xFC, 0xFC, 0x7C, 0x7E, 0x7E, 0x3C, 0x3C, 0x18, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x70, 0x70, 0x78, 0x78, 0x38, 0x3C, 0x3C, 0x1C, 0x1C, 0x08, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20, 0x30, 0x10, 0x18, 0x08, 0x0C, 0x04, 0x06, 0x02, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x30, 0x78, 0x7C, 0x3C, 0x3E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x38, 0x7C, 0x7E, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x07, 0x03, 0x00 },
    { 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x1C, 0x3E, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x03, 0x01, 0x00 },
    { 0x00, 0xC0, 0xE0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0x0F, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x0F, 0x03, 0x00 },
    { 0x00, 0xC0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0x0F, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x0F, 0x03, 0x00 },
    { 0xC0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF0, 0xC0, 0x00, 0x07, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x07, 0x00 },
    { 0xC0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x03, 0x0F, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x0F, 0x00 },
    { 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1E, 0x00 },
    { 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1E, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3E, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0x7C, 0x38, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x7C, 0x7E, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x7C, 0x38, 0x00 },
};

PROGMEM static const uint8_t imgStoneFace[16][24] = { // 12x16 x16
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x38, 0x38, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x70, 0x78, 0x78, 0x7C, 0x3C, 0x3C, 0x1C, 0x18, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x78, 0x78, 0x38, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x30, 0x30, 0x10, 0x18, 0x18, 0x08, 0x08, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x38, 0x18, 0x1C, 0x0C, 0x0E, 0x06, 0x07, 0x03, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x38, 0x3C, 0x3E, 0x1E, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x1C, 0x3E, 0x3F, 0x1F, 0x1F, 0x0F, 0x0F, 0x03, 0x01, 0x00, 0x00 },
    { 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x0F, 0x03, 0x00, 0x00 },
    { 0x00, 0x00, 0xC0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x0F, 0x03, 0x00, 0x00 },
    { 0x00, 0xC0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x07, 0x00, 0x00 },
    { 0x00, 0xC0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x0F, 0x00, 0x00 },
    { 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1E, 0x00, 0x00 },
    { 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1E, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3E, 0x3E, 0x7E, 0x7E, 0x7E, 0x7C, 0x7C, 0x38, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x3C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x78, 0x38, 0x00, 0x00 },
};

/*---------------------------------------------------------------------------*/
/*                                Sound Data                                 */
/*---------------------------------------------------------------------------*/

PROGMEM static const byte soundStart[] = {
    0x90, 72, 0, 100, 0x90, 74, 0, 100, 0x90, 76, 0, 100,
    0x90, 77, 0, 100, 0x90, 79, 0, 200, 0x80, 0xF0
};

PROGMEM static const byte soundOver[] = {
    0x90, 55, 0, 120, 0x90, 54, 0, 140, 0x90, 53, 0, 160, 0x90, 52, 0, 180,
    0x90, 51, 0, 200, 0x90, 50, 0, 220, 0x90, 49, 0, 240, 0x90, 48, 0, 260, 0x80, 0xF0
};
