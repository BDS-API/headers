#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class BegGoal : Goal {

public:
    ~BegGoal(); // _ZN7BegGoalD2Ev
    virtual bool canUse(); // _ZN7BegGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN7BegGoal16canContinueToUseEv
    virtual void start(); // _ZN7BegGoal5startEv
    virtual void stop(); // _ZN7BegGoal4stopEv
    virtual void tick(); // _ZN7BegGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK7BegGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    BegGoal(Mob &, std::vector<ItemDescriptor> const&, float, int, int); // _ZN7BegGoalC2ER3MobRKSt6vectorI14ItemDescriptorSaIS3_EEfii
    void _playerHoldingInteresting(Player *); // _ZN7BegGoal25_playerHoldingInterestingEP6Player
};
