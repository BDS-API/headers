#pragma once

#include "BaseMoveToBlockGoal.h"
#include <string>


class OcelotSitOnBlockGoal : public BaseMoveToBlockGoal {

public:
    virtual ~OcelotSitOnBlockGoal(); // _ZN20OcelotSitOnBlockGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN20OcelotSitOnBlockGoal6canUseEv
    virtual void start(); // _ZN20OcelotSitOnBlockGoal5startEv
    virtual void stop(); // _ZN20OcelotSitOnBlockGoal4stopEv
    virtual void tick(); // _ZN20OcelotSitOnBlockGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK20OcelotSitOnBlockGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN20OcelotSitOnBlockGoal13isValidTargetER11BlockSourceRK8BlockPos
    OcelotSitOnBlockGoal(Mob *, float); // _ZN20OcelotSitOnBlockGoalC2EP3Mobf
};
