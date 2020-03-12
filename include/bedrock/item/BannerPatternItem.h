#pragma once

#include <string>
#include "Item.h"


class BannerPatternItem : Item {

public:
    virtual bool isPattern()const;
    ~BannerPatternItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    BannerPatternItem(std::string const&, int);
};
