#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"
#include <set>


class RaidGardenGoal : BaseMoveToBlockGoal {

public:
    ~RaidGardenGoal(); // _ZN14RaidGardenGoalD2Ev
    virtual bool canUse(); // _ZN14RaidGardenGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN14RaidGardenGoal16canContinueToUseEv
    virtual void start(); // _ZN14RaidGardenGoal5startEv
    virtual void tick(); // _ZN14RaidGardenGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK14RaidGardenGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN14RaidGardenGoal13isValidTargetER11BlockSourceRK8BlockPos
    RaidGardenGoal(Mob &, float, int, int, int, float, int, int, int, int, std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> const&); // _ZN14RaidGardenGoalC2ER3MobfiiifiiiiRKSt3setIPK5BlockSt4lessIS5_ESaIS5_EE
};
