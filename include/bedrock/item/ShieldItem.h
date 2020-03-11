#pragma once

#include "../io/IDataInput.h"
#include "./ItemStackBase.h"
#include "../io/IDataOutput.h"
#include "../io/ReadOnlyBinaryStream.h"
#include "./ItemInstance.h"
#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include <string>


class ShieldItem : Item {

public:
    static long EFFECTIVE_BLOCK_DELAY;
    static long IN_HAND_BLOCK_DURATION;
    static std::string TIMESTAMP_TAG;

    virtual ~ShieldItem();
    virtual bool isHandEquipped()const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantSlot()const;
    virtual void readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const;
    virtual void writeUserData(ItemStackBase const&, IDataOutput &)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const;
    virtual void getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const;

    ShieldItem(std::string const&, int);
    void playBlockSound(Player *)const;
    void playBreakSound(Player *)const;
};
