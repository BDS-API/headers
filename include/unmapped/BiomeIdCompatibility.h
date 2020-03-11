#pragma once

#include <string>


class BiomeIdCompatibility {

public:
    static long MAX_CUSTOM_BIOMES;


    bool isReserved(unsigned int);
    void adjustForReservedRanges(unsigned int, std::string const&);
};
