#pragma once

#include "../actor/Mob.h"
#include "./ItemStackBase.h"
#include "./Item.h"
#include "./ItemStack.h"
#include <string>


class ClockItem : Item {

public:
    virtual ~ClockItem();
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;

    ClockItem(std::string const&, int);
//  void populateFrames(cg::ImageDescription const&); //TODO: incomplete function definition
};
