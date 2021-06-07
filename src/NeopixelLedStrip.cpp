#include "NeopixelLedStrip.h"

NeopixelLedStrip::NeopixelLedStrip(Adafruit_NeoPixel* strip) {
    _strip = strip;
}

void NeopixelLedStrip::setPixelColour(unsigned int offset, uint32_t colour) {
    _strip -> setPixelColor(offset, colour);
}

void NeopixelLedStrip::update() {
    _strip -> show();
}

void NeopixelLedStrip::clear() {
    _strip -> clear();
    update();
}