#pragma once

#include <string>
#include "ItemStack.h"
#include "ItemStackBase.h"
#include "../actor/Mob.h"
#include "Item.h"


class ClockItem : Item {

public:
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    ~ClockItem();
    ClockItem(std::string const&, int);
//  void populateFrames(cg::ImageDescription const&); //TODO: incomplete function definition
};
