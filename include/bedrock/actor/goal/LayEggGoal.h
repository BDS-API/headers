#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class LayEggGoal : BaseMoveToBlockGoal {

public:
    ~LayEggGoal(); // _ZN10LayEggGoalD2Ev
    virtual bool canUse(); // _ZN10LayEggGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN10LayEggGoal16canContinueToUseEv
    virtual void start(); // _ZN10LayEggGoal5startEv
    virtual void tick(); // _ZN10LayEggGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK10LayEggGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN10LayEggGoal13isValidTargetER11BlockSourceRK8BlockPos
    virtual void _moveToBlock(); // _ZN10LayEggGoal12_moveToBlockEv
    LayEggGoal(Mob &, float, int, int, int, float, DefinitionTrigger const&); // _ZN10LayEggGoalC2ER3MobfiiifRK17DefinitionTrigger
    void _layEgg(BlockPos const&); // _ZN10LayEggGoal7_layEggERK8BlockPos
};
