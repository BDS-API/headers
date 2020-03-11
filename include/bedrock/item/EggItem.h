#pragma once

#include "../block/unmapped/BlockSource.h"
#include "./Item.h"
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include "../container/Container.h"
#include <string>


class EggItem : Item {

public:
    virtual ~EggItem();
    virtual bool isThrowable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    EggItem(std::string const&, int);
};
