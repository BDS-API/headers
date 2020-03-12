#pragma once

#include <string>
#include "Item.h"


class CompassItem : Item {

public:
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    ~CompassItem();
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    CompassItem(std::string const&, int);
//  void populateFrames(cg::ImageDescription const&); //TODO: incomplete function definition
};
