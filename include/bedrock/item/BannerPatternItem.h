#pragma once

#include "./Item.h"
#include "../level/Level.h"
#include "./ItemStackBase.h"
#include <string>


class BannerPatternItem : Item {

public:
    virtual ~BannerPatternItem();
    virtual bool isPattern()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;

    BannerPatternItem(std::string const&, int);
};
