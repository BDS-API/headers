#pragma once

#include "../EnderDragon.h"
#include "Goal.h"
#include <string>


class DragonScanningGoal : Goal {

public:
    static long SITTING_SCANNING_IDLE_TICKS;
    static long SITTING_ATTACK_VIEW_RANGE;
    static long SITTING_CHARGE_VIEW_RANGE;

    virtual void stop();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void start();
    ~DragonScanningGoal();
    DragonScanningGoal(EnderDragon &);
};
