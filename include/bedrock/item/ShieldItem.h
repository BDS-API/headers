#pragma once

#include <string>
#include "Item.h"


class ShieldItem : Item {

public:
    static long EFFECTIVE_BLOCK_DELAY;
    static long IN_HAND_BLOCK_DURATION;
    static std::string TIMESTAMP_TAG;

    ~ShieldItem(); // _ZN10ShieldItemD2Ev
    virtual bool isHandEquipped()const; // _ZNK10ShieldItem14isHandEquippedEv
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const; // _ZNK10ShieldItem17isValidRepairItemERK12ItemInstanceS2_
    virtual void getEnchantSlot()const; // _ZNK10ShieldItem14getEnchantSlotEv
    virtual void readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const; // _ZNK10ShieldItem12readUserDataER13ItemStackBaseR10IDataInputR20ReadOnlyBinaryStream
    virtual void writeUserData(ItemStackBase const&, IDataOutput &)const; // _ZNK10ShieldItem13writeUserDataERK13ItemStackBaseR11IDataOutput
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const; // _ZNK10ShieldItem13inventoryTickER9ItemStackR5LevelR5Actorib
    virtual void getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const; // _ZNK10ShieldItem19getInHandUpdateTypeERK6PlayerRK12ItemInstanceS5_bb
    virtual void getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const; // _ZNK10ShieldItem19getInHandUpdateTypeERK6PlayerRK9ItemStackS5_bb
    ShieldItem(std::string const&, int); // _ZN10ShieldItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void playBlockSound(Player *)const; // _ZNK10ShieldItem14playBlockSoundEP6Player
    void playBreakSound(Player *)const; // _ZNK10ShieldItem14playBreakSoundEP6Player
};
