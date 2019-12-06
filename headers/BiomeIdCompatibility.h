#pragma once

class BiomeIdCompatibility {

public:
    static long BiomeIdCompatibility::MAX_CUSTOM_BIOMES;


    bool isReserved(unsigned int);
    void adjustForReservedRanges(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
