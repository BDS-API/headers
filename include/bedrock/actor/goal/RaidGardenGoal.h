#pragma once

#include <set>
#include "BaseMoveToBlockGoal.h"
#include <string>


class RaidGardenGoal : public BaseMoveToBlockGoal {

public:
    virtual ~RaidGardenGoal(); // _ZN14RaidGardenGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN14RaidGardenGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN14RaidGardenGoal16canContinueToUseEv
    virtual void start(); // _ZN14RaidGardenGoal5startEv
    virtual void tick(); // _ZN14RaidGardenGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK14RaidGardenGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN14RaidGardenGoal13isValidTargetER11BlockSourceRK8BlockPos
    RaidGardenGoal(Mob &, float, int, int, int, float, int, int, int, int, std::set<Block const*, long, std::allocator<Block const*>> const&); // _ZN14RaidGardenGoalC2ER3MobfiiifiiiiRKSt3setIPK5BlockSt4lessIS5_ESaIS5_EE
};
