#pragma once



class SubChunkBrightnessStorage {

public:
    class LightPair;

    void reset(bool, bool);
    SubChunkBrightnessStorage();
    class LightPair {

    public:
        void toBrightnessPair()const;
        LightPair(unsigned char);
        bool isDarkness()const;
    };
};
