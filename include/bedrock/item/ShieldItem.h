#pragma once

#include "ItemStack.h"
#include "../io/IDataOutput.h"
#include <string>
#include "../actor/Actor.h"
#include "ItemInstance.h"
#include "../io/IDataInput.h"
#include "../actor/Player.h"
#include "../io/ReadOnlyBinaryStream.h"
#include "ItemStackBase.h"
#include "Item.h"
#include "../level/Level.h"


class ShieldItem : Item {

public:
    static long EFFECTIVE_BLOCK_DELAY;
    static long IN_HAND_BLOCK_DURATION;
    static std::string TIMESTAMP_TAG;

    virtual void readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const;
    virtual void getEnchantSlot()const;
    virtual void getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    ~ShieldItem();
    virtual void writeUserData(ItemStackBase const&, IDataOutput &)const;
    virtual bool isHandEquipped()const;
    void playBreakSound(Player *)const;
    void playBlockSound(Player *)const;
    ShieldItem(std::string const&, int);
};
