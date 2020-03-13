#pragma once



class SubChunkBrightnessStorage {

public:
    class LightPair;

    SubChunkBrightnessStorage(); // _ZN25SubChunkBrightnessStorageC2Ev
    void reset(bool, bool); // _ZN25SubChunkBrightnessStorage5resetEbb
    class LightPair {

    public:
        void toBrightnessPair()const; // _ZNK25SubChunkBrightnessStorage9LightPair16toBrightnessPairEv
        LightPair(unsigned char); // _ZN25SubChunkBrightnessStorage9LightPairC2Eh
        bool isDarkness()const; // _ZNK25SubChunkBrightnessStorage9LightPair10isDarknessEv
    };
};
