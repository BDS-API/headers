#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../container/Container.h"
#include "../actor/Mob.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class FlintAndSteelItem : Item {

public:
    ~FlintAndSteelItem();
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void getEnchantSlot()const;
    virtual bool isDestructive(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    FlintAndSteelItem(std::string const&, int);
};
