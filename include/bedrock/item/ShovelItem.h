#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "DiggerItem.h"
#include "Item.h"


class ShovelItem : DiggerItem {

public:
    ~ShovelItem(); // _ZN10ShovelItemD2Ev
    virtual bool canDestroySpecial(Block const&)const; // _ZNK10ShovelItem17canDestroySpecialERK5Block
    virtual void getEnchantSlot()const; // _ZNK10ShovelItem14getEnchantSlotEv
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK10ShovelItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    ShovelItem(std::string const&, int, Item::Tier const&); // _ZN10ShovelItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRKN4Item4TierE
};
