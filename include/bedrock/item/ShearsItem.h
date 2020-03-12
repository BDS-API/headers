#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ItemInstance.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../container/Container.h"
#include "../actor/Mob.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class ShearsItem : Item {

public:
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void getEnchantSlot()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool canDestroySpecial(Block const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~ShearsItem();
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    ShearsItem(std::string const&, int);
};
