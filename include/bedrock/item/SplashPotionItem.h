#pragma once

#include <string>
#include <memory>
#include "PotionItem.h"


class SplashPotionItem : PotionItem {

public:
    ~SplashPotionItem(); // _ZN16SplashPotionItemD2Ev
    virtual bool isThrowable()const; // _ZNK16SplashPotionItem11isThrowableEv
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK16SplashPotionItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void use(ItemStack &, Player &)const; // _ZNK16SplashPotionItem3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK16SplashPotionItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK16SplashPotionItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK16SplashPotionItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN16SplashPotionItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void getPotionType()const; // _ZNK16SplashPotionItem13getPotionTypeEv
    SplashPotionItem(std::string const&, int); // _ZN16SplashPotionItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
