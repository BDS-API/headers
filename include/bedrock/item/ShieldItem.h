#pragma once

#include <string>
#include "Item.h"


class ShieldItem : Item {

public:
    static long EFFECTIVE_BLOCK_DELAY;
    static long IN_HAND_BLOCK_DURATION;
    static std::string TIMESTAMP_TAG;

    ~ShieldItem();
    virtual bool isHandEquipped()const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const;
    virtual void readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const;
    virtual void writeUserData(ItemStackBase const&, IDataOutput &)const;
    virtual void getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void getEnchantSlot()const;
    ShieldItem(std::string const&, int);
    void playBreakSound(Player *)const;
    void playBlockSound(Player *)const;
};
