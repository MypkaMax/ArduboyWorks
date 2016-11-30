#include "common.h"

/*  Defines  */

/*  Local Functions  */

static void setSound(bool enabled);
static void playSound1();
static void playSound2();

/*  Local Variables  */

PROGMEM static const uint8_t imgTitle1[] = { // "Hollow" 84x20
    0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFE, 0xFE, 0xFE, 0xFE,
    0xFE, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0xC0, 0xC0,
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0xC0,
    0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x83, 0x83, 0xC7,
    0xFF, 0xFF, 0xFF, 0xFF, 0x7C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x00, 0x00, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x83, 0x83, 0xC7, 0xFF, 0xFF, 0xFF,
    0xFF, 0x7C, 0x00, 0x0F, 0x7F, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xFF, 0xFF, 0x1F, 0x1F, 0xFF, 0xFF,
    0xFF, 0xF0, 0xF0, 0xFF, 0xFF, 0x7F, 0x07, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00,
    0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03,
    0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00,
};

PROGMEM static const uint8_t imgTitle2[] = { // "Seeker" 80x20
    0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0x9E, 0x1E, 0x1E, 0x1E, 0x1E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
    0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0,
    0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0x00,
    0xE1, 0xC3, 0xC7, 0x87, 0x8F, 0x8F, 0x9F, 0xFF, 0xFE, 0xFE, 0xFC, 0xF8, 0x00, 0x00, 0x7C, 0xFF,
    0xFF, 0xFF, 0xFF, 0xBB, 0x39, 0x39, 0x3F, 0x3F, 0x3F, 0xBF, 0x3E, 0x00, 0x7C, 0xFF, 0xFF, 0xFF,
    0xFF, 0xBB, 0x39, 0x39, 0x3F, 0x3F, 0x3F, 0xBF, 0x3E, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x18,
    0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0x83, 0x00, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xBB, 0x39, 0x39,
    0x3F, 0x3F, 0x3F, 0xBF, 0x3E, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x03, 0x03, 0x03, 0x00,
    0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x03, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00,
    0x00, 0x01, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x04, 0x01, 0x03, 0x03, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x03, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
};

PROGMEM static const uint8_t imgMan[] = { // 40x40
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x70, 0x78, 0x78, 0x00, 0xF8,
    0xFC, 0x06, 0xF3, 0xF9, 0xFD, 0xFD, 0xFD, 0xF9, 0xF2, 0x04, 0xF8, 0x00, 0x60, 0x40, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xD8, 0xD6, 0xCB, 0xD4,
    0xEA, 0xE4, 0xEA, 0xF5, 0xF2, 0xF5, 0xF2, 0xF9, 0xF7, 0xF6, 0xEC, 0xED, 0xEB, 0xEB, 0xEB, 0xE9,
    0xF4, 0xFA, 0xF9, 0xF8, 0xFA, 0x79, 0x7A, 0x7B, 0x7C, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x3F, 0xC7, 0x07, 0x03, 0xAB, 0x53, 0xFB, 0xFB, 0xFB, 0xFD,
    0xFD, 0x81, 0x81, 0xFD, 0xFD, 0xFD, 0xFE, 0xC0, 0xC0, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0x1F, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x20, 0x10, 0x28, 0x48, 0x84, 0x04,
    0xA5, 0x56, 0xAC, 0x59, 0xAA, 0x5D, 0xB7, 0x57, 0xB7, 0x6F, 0xAF, 0x69, 0xA8, 0x28, 0xE8, 0x6E,
    0xAF, 0x57, 0xB7, 0x57, 0xAB, 0x54, 0xAA, 0x56, 0xEA, 0x42, 0xE2, 0x16, 0x0C, 0x04, 0x08, 0xF0,
    0x00, 0x03, 0x04, 0x04, 0x04, 0x05, 0x02, 0x03, 0x01, 0x0F, 0xF9, 0x20, 0x20, 0x25, 0x22, 0x25,
    0x2A, 0x35, 0x2A, 0x35, 0xEA, 0x20, 0x3F, 0xF5, 0x2A, 0x35, 0x2A, 0x25, 0x22, 0x25, 0x20, 0xF0,
    0x3F, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00,
};

PROGMEM static const uint8_t imgEyes[] = { // 10x8x3
    0xFD, 0x81, 0x81, 0xFD, 0xFD, 0xFD, 0xFE, 0xC0, 0xC0, 0xFE, 0xFD, 0x8D, 0x8D, 0xFD, 0xFD, 0xFD,
    0xFE, 0xC6, 0xC6, 0xFE, 0xDD, 0xDD, 0xDD, 0xDD, 0xFD, 0xFD, 0xEE, 0xEE, 0xEE, 0xEE,
};

PROGMEM static const uint8_t imgHeadLight[] = { // 7x8
    0x3C, 0x7E, 0xFF, 0xFF, 0xFF, 0x7E, 0x3C,
};

PROGMEM static const char menuGame[] = "START GAME";
PROGMEM static const char menuSound[] = "SOUND ";
PROGMEM static const char menuCredit[] = "CREDIT";

PROGMEM static const char * const menusTable[] = {
    menuGame, menuSound, menuCredit
};

PROGMEM static const char credit0[] = "- HOLLOW SEEKER -";
PROGMEM static const char credit1[] = "DECEMBER 2016";
PROGMEM static const char credit2[] = "PROGREMMED BY OBONO";
PROGMEM static const char credit3[] = "THIS PROGRAM IS";
PROGMEM static const char credit4[] = "RELEASED UNDER";
PROGMEM static const char credit5[] = "THE MIT LICENSE.";

PROGMEM static const char * const creditsTable[] = {
    credit0, NULL, credit1, credit2, NULL, credit3, credit4, credit5
};

static bool     isCredit;
static bool     toDraw;
static bool     sound;
static int8_t   menuPos;
static uint8_t  eyesWait;
static int8_t   lightColor;
static bool     lightBlink;
static uint8_t  lightWait;

void initTitle()
{
    isCredit = false;
    toDraw = true;
    setSound(arduboy.audio.enabled());
    menuPos = 0;

    eyesWait = rnd(100) + 150;
    lightColor = WHITE;
    lightBlink = false;
    lightWait = rnd(180) + 60;
}

bool updateTitle()
{
    bool ret = false;
    if (!isCredit) {
        if (arduboy.buttonDown(UP_BUTTON)) {
            if (menuPos-- == 0) menuPos = 2;
            playSound1();
            toDraw = true;
        }
        if (arduboy.buttonDown(DOWN_BUTTON)) {
            if (menuPos++ == 2) menuPos = 0;
            playSound1();
            toDraw = true;
        }
        if (arduboy.buttonDown(A_BUTTON | B_BUTTON)) {
            switch (menuPos) {
            case 0:
                ret = true;
                arduboy.audio.saveOnOff();
                break;
            case 1:
                setSound(!sound);
                playSound2();
                break;
            case 2:
                isCredit = true;
                playSound2();
                break;
            }
            toDraw = true;
        }
    } else {
        if (arduboy.buttonDown(A_BUTTON | B_BUTTON)) {
            isCredit = false;
            playSound2();
            toDraw = true;
        }
    }

    randomSeed(rand() ^ micros()); // Shuffle random
    if (eyesWait-- == 0) eyesWait = rnd(100) + 150;
    if (lightBlink && (lightWait & 1)) lightColor = WHITE - lightColor;
    if (lightWait-- == 0) {
        lightBlink = !lightBlink;
        lightWait = rnd(180) + 60;
    }
    return ret;
}

void drawTitle()
{
    if (toDraw) {
        char buf[22], *p;
        arduboy.clear();
        if (!isCredit) {
            arduboy.drawBitmap(3, 0, imgTitle1, 84, 20, WHITE);
            arduboy.drawBitmap(45, 19, imgTitle2, 80, 20, WHITE);
            arduboy.drawBitmap(4, 24, imgMan, 40, 40, WHITE);
            for (int i = 0; i < 3; i++) {
                p = pgm_read_word(menusTable + i);
                strcpy_P(buf, p);
                arduboy.setCursor(64 - (i == menuPos) * 2, i * 8 + 42);
                arduboy.print(buf);
                if (p == menuSound) {
                    arduboy.print((sound) ? F("ON") : F("OFF"));
                }
            }
            arduboy.fillRect2(54, menuPos * 8 + 42, 5, 5, WHITE);
        } else {
            for (int i = 0; i < 8; i++) {
                p = pgm_read_word(creditsTable + i);
                if (p != NULL) {
                    strcpy_P(buf, p);
                    uint8_t len = strnlen(buf, sizeof(buf));
                    arduboy.setCursor(64 - len * 3, i * 6 + 8);
                    arduboy.print(buf);
                }
            }
        }
    }
    if (!isCredit) {
        uint8_t ani = max(3 - eyesWait / 4, 0);
        if (ani == 3) ani = 1;
        memcpy_P(arduboy.getBuffer() + 660, imgEyes + ani * 10, 10);
        //arduboy.fillRect2(20, 40, 10, 8, BLACK);
        //arduboy.drawBitmap(20, 40, imgEyes + ani * 10, 10, 8, WHITE);
        arduboy.drawBitmap(22, 26, imgHeadLight, 7, 8, lightColor);
    }
}

static void setSound(bool enabled)
{
    if (enabled) {
        arduboy.audio.on();
    } else {
        arduboy.audio.off();
    }
    sound = enabled;
}

static void playSound1()
{
    arduboy.tunes.tone(440, 10);
}

static void playSound2()
{
    arduboy.tunes.tone(587, 20);
}
