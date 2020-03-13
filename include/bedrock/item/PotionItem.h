#pragma once

#include <string>
#include <memory>
#include "Item.h"


class PotionItem : Item {

public:
    ~PotionItem(); // _ZN10PotionItemD2Ev
    virtual bool isGlint(ItemStackBase const&)const; // _ZNK10PotionItem7isGlintERK13ItemStackBase
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK10PotionItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual bool isValidAuxValue(int)const; // _ZNK10PotionItem15isValidAuxValueEi
    virtual void uniqueAuxValues()const; // _ZNK10PotionItem15uniqueAuxValuesEv
    virtual void use(ItemStack &, Player &)const; // _ZNK10PotionItem3useER9ItemStackR6Player
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const; // _ZNK10PotionItem15useTimeDepletedER9ItemStackP5LevelP6Player
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK10PotionItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const; // _ZNK10PotionItem26buildEffectDescriptionNameB5cxx11ERK13ItemStackBase
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK10PotionItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN10PotionItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void getPotionType()const; // _ZNK10PotionItem13getPotionTypeEv
    PotionItem(std::string const&, int); // _ZN10PotionItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void applyEffect(ThrownPotion *, ItemStack const&)const; // _ZNK10PotionItem11applyEffectEP12ThrownPotionRK9ItemStack
    void getEffectId(ItemDescriptor const&)const; // _ZNK10PotionItem11getEffectIdERK14ItemDescriptor
};
