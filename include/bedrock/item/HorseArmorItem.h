#pragma once

#include <string>
#include <memory>
#include "Item.h"


class HorseArmorItem : Item {

public:
    static long mHealthPerTier;

    ~HorseArmorItem(); // _ZN14HorseArmorItemD2Ev
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK14HorseArmorItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void getArmorValue()const; // _ZNK14HorseArmorItem13getArmorValueEv
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const; // _ZNK14HorseArmorItem8getColorERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EERK14ItemDescriptor
    virtual bool isTintable()const; // _ZNK14HorseArmorItem10isTintableEv
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK14HorseArmorItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void getTier()const; // _ZNK14HorseArmorItem7getTierEv
    bool hasCustomColor(std::unique_ptr<CompoundTag> const&)const; // _ZNK14HorseArmorItem14hasCustomColorERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void clearColor(std::unique_ptr<CompoundTag> const&)const; // _ZNK14HorseArmorItem10clearColorERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void setColor(ItemStack &, Color const&)const; // _ZNK14HorseArmorItem8setColorER9ItemStackRK5Color
//  HorseArmorItem(std::string const&, int, int, HorseArmorItem::HorseArmorTier); //TODO: incomplete function definition // _ZN14HorseArmorItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiNS_14HorseArmorTierE
};
