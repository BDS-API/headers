#pragma once

#include <string>


namespace BiomeIdCompatibility {

    static long MAX_CUSTOM_BIOMES;

    bool isReserved(unsigned int); // _ZN20BiomeIdCompatibility10isReservedEj
    void adjustForReservedRanges(unsigned int, std::string const&); // _ZN20BiomeIdCompatibility23adjustForReservedRangesEjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
