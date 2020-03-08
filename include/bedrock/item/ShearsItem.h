#pragma once

#include "../container/Container"
#include "../actor/Actor"
#include "../actor/Mob"
#include "../util/Vec3"
#include "../util/BlockPos"
#include "../block/unmapped/BlockSource"
#include "../../unmapped/Block"


class ShearsItem : Item {

public:
    ShearsItem::~ShearsItem()
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ShearsItem(std::string const&, int);
};
