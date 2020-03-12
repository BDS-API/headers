#pragma once



class SubChunkBrightnessStorage {

public:
    class LightPair;

    void reset(bool, bool);
    SubChunkBrightnessStorage();
    class LightPair {

    public:
        void toBrightnessPair()const;
        bool isDarkness()const;
        LightPair(unsigned char);
    };
};
