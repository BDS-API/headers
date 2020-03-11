#pragma once



namespace SubChunkBrightnessStorage {

class LightPair {

public:

    void toBrightnessPair()const;
    LightPair(unsigned char);
    bool isDarkness()const;
};

}