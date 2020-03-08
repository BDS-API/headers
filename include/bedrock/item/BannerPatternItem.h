#pragma once

#include "../level/Level"


class BannerPatternItem : Item {

public:
    virtual BannerPatternItem::~BannerPatternItem()
    virtual bool isPattern()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;

    BannerPatternItem(std::string const&, int);
};
