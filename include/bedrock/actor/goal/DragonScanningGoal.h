#pragma once

#include <string>
#include "Goal.h"


class DragonScanningGoal : Goal {

public:
    static long SITTING_SCANNING_IDLE_TICKS;
    static long SITTING_ATTACK_VIEW_RANGE;
    static long SITTING_CHARGE_VIEW_RANGE;

    ~DragonScanningGoal(); // _ZN18DragonScanningGoalD2Ev
    virtual bool canUse(); // _ZN18DragonScanningGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN18DragonScanningGoal16canContinueToUseEv
    virtual void start(); // _ZN18DragonScanningGoal5startEv
    virtual void stop(); // _ZN18DragonScanningGoal4stopEv
    virtual void tick(); // _ZN18DragonScanningGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK18DragonScanningGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DragonScanningGoal(EnderDragon &); // _ZN18DragonScanningGoalC2ER11EnderDragon
};
