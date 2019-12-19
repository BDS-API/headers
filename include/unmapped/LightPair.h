#pragma once

using namespace SubChunkBrightnessStorage;

class LightPair {

public:

    void toBrightnessPair(void)const;
    LightPair(unsigned char);
    bool isDarkness(void)const;
};
