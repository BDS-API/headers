#pragma once

class LegacyPackIdVersion {

public:

    void LegacyPackIdVersion(LegacyPackIdVersion const&);
    void LegacyPackIdVersion(LegacyPackIdVersion&&);
    void LegacyPackIdVersion(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getUpgradedPackId(void)const;
};
