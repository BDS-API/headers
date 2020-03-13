#pragma once

#include <string>
#include <memory>
#include "Item.h"


class ArrowItem : Item {

public:
    ~ArrowItem(); // _ZN9ArrowItemD2Ev
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK9ArrowItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual bool isValidAuxValue(int)const; // _ZNK9ArrowItem15isValidAuxValueEi
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK9ArrowItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK9ArrowItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const; // _ZNK9ArrowItem26buildEffectDescriptionNameB5cxx11ERK13ItemStackBase
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK9ArrowItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN9ArrowItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    ArrowItem(std::string const&, int); // _ZN9ArrowItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void applyEffect(Arrow *, ItemInstance const&)const; // _ZNK9ArrowItem11applyEffectEP5ArrowRK12ItemInstance
    void getMobEffects(int)const; // _ZNK9ArrowItem13getMobEffectsEi
};
