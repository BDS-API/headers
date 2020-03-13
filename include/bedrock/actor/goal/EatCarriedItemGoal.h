#pragma once

#include <string>
#include "Goal.h"


class EatCarriedItemGoal : Goal {

public:
    static long EATING_TIME;
    static long CHEW_CHANCE;

    ~EatCarriedItemGoal(); // _ZN18EatCarriedItemGoalD2Ev
    virtual bool canUse(); // _ZN18EatCarriedItemGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN18EatCarriedItemGoal16canContinueToUseEv
    virtual void start(); // _ZN18EatCarriedItemGoal5startEv
    virtual void stop(); // _ZN18EatCarriedItemGoal4stopEv
    virtual void tick(); // _ZN18EatCarriedItemGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK18EatCarriedItemGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _updateInventory(ItemStack const&); // _ZN18EatCarriedItemGoal16_updateInventoryERK9ItemStack
    virtual void _canEatItem(Item const*)const; // _ZNK18EatCarriedItemGoal11_canEatItemEPK4Item
    virtual void _getContainerItem(); // _ZN18EatCarriedItemGoal17_getContainerItemEv
    EatCarriedItemGoal(Mob &, int); // _ZN18EatCarriedItemGoalC2ER3Mobi
};
