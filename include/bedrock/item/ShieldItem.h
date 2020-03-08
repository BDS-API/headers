#pragma once

#include "../actor/Player"
#include "../actor/Actor"
#include "../io/ReadOnlyBinaryStream"
#include "../io/IDataOutput"
#include "../io/IDataInput"
#include "../level/Level"


class ShieldItem : Item {

public:
    static long EFFECTIVE_BLOCK_DELAY;
    static long IN_HAND_BLOCK_DURATION;
    static long TIMESTAMP_TAG[abi:cxx11];

    ShieldItem::~ShieldItem()
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
