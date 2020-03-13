#pragma once

#include <string>
#include "Item.h"


class ExperiencePotionItem : Item {

public:
    ~ExperiencePotionItem(); // _ZN20ExperiencePotionItemD2Ev
    virtual bool isGlint(ItemStackBase const&)const; // _ZNK20ExperiencePotionItem7isGlintERK13ItemStackBase
    virtual bool isThrowable()const; // _ZNK20ExperiencePotionItem11isThrowableEv
    virtual void use(ItemStack &, Player &)const; // _ZNK20ExperiencePotionItem3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK20ExperiencePotionItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    ExperiencePotionItem(std::string const&, int); // _ZN20ExperiencePotionItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
