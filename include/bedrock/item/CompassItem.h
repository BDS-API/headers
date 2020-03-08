#pragma once

#include "../actor/Mob"


class CompassItem : Item {

public:
    virtual CompassItem::~CompassItem()
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;

    CompassItem(std::string const&, int);
    void populateFrames(cg::ImageDescription const&);
};
