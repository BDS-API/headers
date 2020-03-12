#pragma once

#include <string>


namespace BiomeIdCompatibility {

    static long MAX_CUSTOM_BIOMES;

    void adjustForReservedRanges(unsigned int, std::string const&);
    bool isReserved(unsigned int);
};
