#pragma once

#include "../actor/Mob.h"
#include "./ItemStackBase.h"
#include "./Item.h"
#include "./ItemStack.h"
#include <string>


class CompassItem : Item {

public:
    virtual ~CompassItem();
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;

    CompassItem(std::string const&, int);
//  void populateFrames(cg::ImageDescription const&); //TODO: incomplete function definition
};
