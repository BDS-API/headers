#pragma once

class BannerPatternItem : Item {

public:
    virtual ~BannerPatternItem();
    virtual bool isPattern(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;

    void BannerPatternItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
