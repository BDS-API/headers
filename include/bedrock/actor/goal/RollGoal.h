#pragma once

#include <string>
#include "Goal.h"


class RollGoal : Goal {

public:
    ~RollGoal(); // _ZN8RollGoalD2Ev
    virtual bool canUse(); // _ZN8RollGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN8RollGoal16canContinueToUseEv
    virtual bool canBeInterrupted(); // _ZN8RollGoal16canBeInterruptedEv
    virtual void start(); // _ZN8RollGoal5startEv
    virtual void stop(); // _ZN8RollGoal4stopEv
    virtual void tick(); // _ZN8RollGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK8RollGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RollGoal(Mob &, float); // _ZN8RollGoalC2ER3Mobf
    void _checkForDamagingBlocks()const; // _ZNK8RollGoal23_checkForDamagingBlocksEv
    void _handleRoll(int, Vec3 &, float &, float &)const; // _ZNK8RollGoal11_handleRollEiR4Vec3RfS2_
};
