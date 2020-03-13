#pragma once

#include <string>
#include "Goal.h"


class DragonFlamingGoal : Goal {

public:
    static long ROAR_DURATION;
    static long FLAME_DURATION;
    static long SITTING_FLAME_ATTACK_COUNT;
    static long WARMUP_TIME;

    ~DragonFlamingGoal(); // _ZN17DragonFlamingGoalD2Ev
    virtual bool canUse(); // _ZN17DragonFlamingGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN17DragonFlamingGoal16canContinueToUseEv
    virtual void start(); // _ZN17DragonFlamingGoal5startEv
    virtual void stop(); // _ZN17DragonFlamingGoal4stopEv
    virtual void tick(); // _ZN17DragonFlamingGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK17DragonFlamingGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DragonFlamingGoal(EnderDragon &); // _ZN17DragonFlamingGoalC2ER11EnderDragon
};
