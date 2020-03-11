#pragma once

#include "../actor/Mob.h"
#include "../block/unmapped/BlockSource.h"
#include <string>
#include "./ItemInstance.h"
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "./ItemStack.h"
#include "../container/Container.h"
#include "../../unmapped/Block.h"


class ShearsItem : Item {

public:
    virtual ~ShearsItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ShearsItem(std::string const&, int);
};
