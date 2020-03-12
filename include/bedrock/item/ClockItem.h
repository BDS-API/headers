#pragma once

#include <string>
#include "Item.h"


class ClockItem : Item {

public:
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    ~ClockItem();
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    ClockItem(std::string const&, int);
//  void populateFrames(cg::ImageDescription const&); //TODO: incomplete function definition
};
