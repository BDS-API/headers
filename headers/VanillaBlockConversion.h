#pragma once

class VanillaBlockConversion {

public:

    void getBlockTypeFromLegacyId(unsigned int);
    void getBlockTypeLegacyIdFromName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void tryGetLegacyState(unsigned int, unsigned int);
};
