#pragma once

#include <string>
#include "ItemStack.h"
#include "ItemStackBase.h"
#include "../actor/Mob.h"
#include "Item.h"


class CompassItem : Item {

public:
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    ~CompassItem();
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
//  void populateFrames(cg::ImageDescription const&); //TODO: incomplete function definition
    CompassItem(std::string const&, int);
};
