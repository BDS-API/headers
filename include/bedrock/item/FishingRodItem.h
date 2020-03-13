#pragma once

#include <string>
#include "Item.h"


class FishingRodItem : Item {

public:
    ~FishingRodItem(); // _ZN14FishingRodItemD2Ev
    virtual bool isHandEquipped()const; // _ZNK14FishingRodItem14isHandEquippedEv
    virtual bool requiresInteract()const; // _ZNK14FishingRodItem16requiresInteractEv
    virtual void getEnchantSlot()const; // _ZNK14FishingRodItem14getEnchantSlotEv
    virtual void getEnchantValue()const; // _ZNK14FishingRodItem15getEnchantValueEv
    virtual void use(ItemStack &, Player &)const; // _ZNK14FishingRodItem3useER9ItemStackR6Player
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const; // _ZNK14FishingRodItem9hurtEnemyER9ItemStackP3MobS3_
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const; // _ZNK14FishingRodItem9mineBlockER9ItemStackRK5BlockiiiP5Actor
    virtual std::string getInteractText(Player const&)const; // _ZNK14FishingRodItem15getInteractTextB5cxx11ERK6Player
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const; // _ZNK14FishingRodItem20getAnimationFrameForEP3MobbPK9ItemStackb
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK14FishingRodItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN14FishingRodItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    FishingRodItem(std::string const&, int); // _ZN14FishingRodItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
