#pragma once

class BannerPatternItem : Item {

public:
    virtual ~BannerPatternItem();
    virtual bool isPattern(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;

    void BannerPatternItem(std::string const&, int);
};
