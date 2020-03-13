#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class ShareItemsGoal : Goal {

public:
    ~ShareItemsGoal(); // _ZN14ShareItemsGoalD2Ev
    virtual bool canUse(); // _ZN14ShareItemsGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN14ShareItemsGoal16canContinueToUseEv
    virtual void start(); // _ZN14ShareItemsGoal5startEv
    virtual void stop(); // _ZN14ShareItemsGoal4stopEv
    virtual void tick(); // _ZN14ShareItemsGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK14ShareItemsGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ShareItemsGoal(Mob &, std::vector<MobDescriptor> const&, float, int, float); // _ZN14ShareItemsGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EEfif
    void selectEntityToShareWith(std::vector<std::pair<int, ItemStack>> const&); // _ZN14ShareItemsGoal23selectEntityToShareWithERKSt6vectorISt4pairIi9ItemStackESaIS3_EE
};
