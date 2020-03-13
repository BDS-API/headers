#pragma once

#include <string>
#include <memory>
#include "PotionItem.h"


class LingeringPotionItem : PotionItem {

public:
    ~LingeringPotionItem(); // _ZN19LingeringPotionItemD2Ev
    virtual bool isThrowable()const; // _ZNK19LingeringPotionItem11isThrowableEv
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK19LingeringPotionItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void use(ItemStack &, Player &)const; // _ZNK19LingeringPotionItem3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK19LingeringPotionItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK19LingeringPotionItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK19LingeringPotionItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN19LingeringPotionItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void getPotionType()const; // _ZNK19LingeringPotionItem13getPotionTypeEv
    LingeringPotionItem(std::string const&, int); // _ZN19LingeringPotionItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
