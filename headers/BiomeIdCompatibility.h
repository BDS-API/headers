#pragma once

class BiomeIdCompatibility {

public:
    static long BiomeIdCompatibility::MAX_CUSTOM_BIOMES;


    bool isReserved(unsigned int);
    void adjustForReservedRanges(unsigned int, std::string const&);
};
