#pragma once

#include "DiggerItem.h"
#include <string>
#include "Item.h"


class PickaxeItem : public DiggerItem {

public:
    virtual ~PickaxeItem(); // _ZN11PickaxeItemD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canDestroySpecial(Block const&)const; // _ZNK11PickaxeItem17canDestroySpecialERK5Block
    virtual void getEnchantSlot()const; // _ZNK11PickaxeItem14getEnchantSlotEv
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const; // _ZNK11PickaxeItem15getDestroySpeedERK12ItemInstanceRK5Block
    PickaxeItem(std::string const&, int, Item::Tier const&); // _ZN11PickaxeItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRKN4Item4TierE
};
