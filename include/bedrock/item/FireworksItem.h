#pragma once

#include <string>
#include "../util/BlockPos.h"
#include <vector>
#include "Item.h"


class FireworksItem : Item {

public:
    static std::string TAG_FIREWORKS;
    static std::string TAG_EXPLOSIONS;
    static std::string TAG_E_FLIGHT;

    ~FireworksItem(); // _ZN13FireworksItemD2Ev
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK13FireworksItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void use(ItemStack &, Player &)const; // _ZNK13FireworksItem3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK13FireworksItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK13FireworksItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    FireworksItem(std::string const&, int); // _ZN13FireworksItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void initFireworksRocketItem(ItemInstance &, std::vector<ItemInstance> const&, int); // _ZN13FireworksItem23initFireworksRocketItemER12ItemInstanceRKSt6vectorIS0_SaIS0_EEi
    void initFireworksRocketItem(ItemStack &, std::vector<ItemStack> const&, int); // _ZN13FireworksItem23initFireworksRocketItemER9ItemStackRKSt6vectorIS0_SaIS0_EEi
};
