#pragma once

#include <string>
#include "Goal.h"


class PickupItemsGoal : Goal {

public:
    ~PickupItemsGoal(); // _ZN15PickupItemsGoalD2Ev
    virtual bool canUse(); // _ZN15PickupItemsGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15PickupItemsGoal16canContinueToUseEv
    virtual void start(); // _ZN15PickupItemsGoal5startEv
    virtual void stop(); // _ZN15PickupItemsGoal4stopEv
    virtual void tick(); // _ZN15PickupItemsGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15PickupItemsGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    PickupItemsGoal(Mob &, float, bool, int, float); // _ZN15PickupItemsGoalC2ER3Mobfbif
    void _dropItem(ItemStack const&)const; // _ZNK15PickupItemsGoal9_dropItemERK9ItemStack
};
