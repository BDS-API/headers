#pragma once

class SubpackInfoCollection {

public:

    void SubpackInfoCollection(void);
    bool hasSubpacks(void)const;
    void addSubpackInfo(SubpackInfo &&);
    void getSubpackInfo(void)const;
    void getSubpackCount(void)const;
    void getDefaultSubpackIndex(ContentTierInfo const&)const;
    void _isValidSubpackIndex(int)const;
    bool isCompatibleSubpack(int, ContentTierInfo const&)const;
    bool isCompatibleSubpack(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ContentTierInfo const&)const;
    void getSubpackIndex(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    bool isCompatible(ContentTierInfo const&)const;
    void getSubpackContentTier(int)const;
};
