#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class ChargeHeldItemGoal : Goal {

public:
    ~ChargeHeldItemGoal(); // _ZN18ChargeHeldItemGoalD2Ev
    virtual bool canUse(); // _ZN18ChargeHeldItemGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN18ChargeHeldItemGoal16canContinueToUseEv
    virtual void start(); // _ZN18ChargeHeldItemGoal5startEv
    virtual void stop(); // _ZN18ChargeHeldItemGoal4stopEv
    virtual void tick(); // _ZN18ChargeHeldItemGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK18ChargeHeldItemGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ChargeHeldItemGoal(Mob &, std::vector<ItemDescriptor> const&); // _ZN18ChargeHeldItemGoalC2ER3MobRKSt6vectorI14ItemDescriptorSaIS3_EE
    void _isHoldingChargeableItem()const; // _ZNK18ChargeHeldItemGoal24_isHoldingChargeableItemEv
};
