#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Mob"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../util/Vec3"
#include "../container/Container"


class FlintAndSteelItem : Item {

public:
    virtual FlintAndSteelItem::~FlintAndSteelItem()
    virtual bool isDestructive(int)const;
    virtual void getEnchantSlot()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    FlintAndSteelItem(std::string const&, int);
};
