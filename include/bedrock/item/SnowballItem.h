#pragma once

#include "ItemStack.h"
#include <string>
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "../container/Container.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class SnowballItem : Item {

public:
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    ~SnowballItem();
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    SnowballItem(std::string const&, int);
};
