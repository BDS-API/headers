#pragma once

#include <string>
#include "RangedWeaponItem.h"


class CrossbowItem : RangedWeaponItem {

public:
    static long DEFAULT_USE_DURATION;

    ~CrossbowItem(); // _ZN12CrossbowItemD2Ev
    virtual void getMaxUseDuration(ItemStack const*)const; // _ZNK12CrossbowItem17getMaxUseDurationEPK9ItemStack
    virtual void getEnchantSlot()const; // _ZNK12CrossbowItem14getEnchantSlotEv
    virtual void use(ItemStack &, Player &)const; // _ZNK12CrossbowItem3useER9ItemStackR6Player
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const; // _ZNK12CrossbowItem15useTimeDepletedER9ItemStackP5LevelP6Player
    virtual void releaseUsing(ItemStack &, Player *, int)const; // _ZNK12CrossbowItem12releaseUsingER9ItemStackP6Playeri
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const; // _ZNK12CrossbowItem20getAnimationFrameForEP3MobbPK9ItemStackb
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK12CrossbowItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN12CrossbowItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual bool canBeCharged()const; // _ZNK12CrossbowItem12canBeChargedEv
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const; // _ZNK12CrossbowItem22playSoundIncrementallyERK9ItemStackR3Mob
    CrossbowItem(std::string const&, int); // _ZN12CrossbowItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getMaxUseDuration(ItemStack const&)const; // _ZNK12CrossbowItem18_getMaxUseDurationERK9ItemStack
    void _shootArrow(ItemInstance const&, ItemInstance const&, Player &)const; // _ZNK12CrossbowItem11_shootArrowERK12ItemInstanceS2_R6Player
    void _shootFirework(ItemInstance const&, Player &)const; // _ZNK12CrossbowItem14_shootFireworkERK12ItemInstanceR6Player
    void _getShootDir(Player const&, float)const; // _ZNK12CrossbowItem12_getShootDirERK6Playerf
};
