#pragma once

#include <string>
#include <vector>
#include "Item.h"


class DiggerItem : Item {

public:
    ~DiggerItem(); // _ZN10DiggerItemD2Ev
    virtual void getAttackDamage()const; // _ZNK10DiggerItem15getAttackDamageEv
    virtual bool isHandEquipped()const; // _ZNK10DiggerItem14isHandEquippedEv
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK10DiggerItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const; // _ZNK10DiggerItem17isValidRepairItemERK12ItemInstanceS2_
    virtual void getEnchantValue()const; // _ZNK10DiggerItem15getEnchantValueEv
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const; // _ZNK10DiggerItem15getDestroySpeedERK12ItemInstanceRK5Block
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const; // _ZNK10DiggerItem9mineBlockER9ItemStackRK5BlockiiiP5Actor
    bool hasBlock(Block const&)const; // _ZNK10DiggerItem8hasBlockERK5Block
    void setBlocks(std::vector<Block const*> const&); // _ZN10DiggerItem9setBlocksERKSt6vectorIPK5BlockSaIS3_EE
    DiggerItem(std::string const&, int, int, Item::Tier const&, std::vector<Block const*> const&); // _ZN10DiggerItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiRKN4Item4TierERKSt6vectorIPK5BlockSaISF_EE
};
