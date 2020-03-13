#pragma once

#include <string>
#include "Goal.h"


class NapGoal : Goal {

public:
    static long MOB_DETECT_TIME;

    ~NapGoal(); // _ZN7NapGoalD2Ev
    virtual bool canUse(); // _ZN7NapGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN7NapGoal16canContinueToUseEv
    virtual void start(); // _ZN7NapGoal5startEv
    virtual void stop(); // _ZN7NapGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK7NapGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    NapGoal(Mob &, float, float, float, float, ActorFilterGroup const&, ActorFilterGroup const&); // _ZN7NapGoalC2ER3MobffffRK16ActorFilterGroupS4_
    void _invalidCooldown(); // _ZN7NapGoal16_invalidCooldownEv
    void _setCooldown(); // _ZN7NapGoal12_setCooldownEv
    void _canSleep(Tick const&)const; // _ZNK7NapGoal9_canSleepERK4Tick
    void _detectsMobs()const; // _ZNK7NapGoal12_detectsMobsEv
};
