#pragma once

#include "ItemStack.h"
#include <string>
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "../container/Container.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class EggItem : Item {

public:
    virtual void use(ItemStack &, Player &)const;
    ~EggItem();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isThrowable()const;
    EggItem(std::string const&, int);
};
