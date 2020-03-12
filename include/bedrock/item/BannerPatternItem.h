#pragma once

#include "Item.h"
#include "../level/Level.h"
#include <string>
#include "ItemStackBase.h"


class BannerPatternItem : Item {

public:
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isPattern()const;
    ~BannerPatternItem();
    BannerPatternItem(std::string const&, int);
};
