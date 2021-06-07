#ifndef LIBRARIES_NEOPIXELLEDSTRIP_H
#define LIBRARIES_NEOPIXELLEDSTRIP_H

#include "../LedStrip.h"
#include <Adafruit_NeoPixel.h>

class NeopixelLedStrip : public LedStrip {
public:
    NeopixelLedStrip(Adafruit_NeoPixel* strip);
    void setPixelColour(unsigned int offset, uint32_t colour);
    void update();
    void fill(uint32_t colour, uint16_t first, uint16_t count);
    void clear();

private:
    Adafruit_NeoPixel* _strip;
};

#endif //LIBRARIES_NEOPIXELLEDSTRIP_H
