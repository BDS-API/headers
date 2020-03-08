#pragma once

#include "../actor/Mob"


class ClockItem : Item {

public:
    virtual ClockItem::~ClockItem()
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;

    ClockItem(std::string const&, int);
    void populateFrames(cg::ImageDescription const&);
};
