#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Mob"
#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/Vec3"
#include "../container/Container"


class ShearsItem : Item {

public:
    virtual ShearsItem::~ShearsItem()
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ShearsItem(std::string const&, int);
};
