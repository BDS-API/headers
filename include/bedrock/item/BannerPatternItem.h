#pragma once

#include <string>
#include "Item.h"


class BannerPatternItem : public Item {

public:
    virtual ~BannerPatternItem(); // _ZN17BannerPatternItemD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isPattern()const; // _ZNK17BannerPatternItem9isPatternEv
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK17BannerPatternItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    BannerPatternItem(std::string const&, int); // _ZN17BannerPatternItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
