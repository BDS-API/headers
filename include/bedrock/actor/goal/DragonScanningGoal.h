#pragma once

#include <string>
#include "Goal.h"


class DragonScanningGoal : Goal {

public:
    static long SITTING_SCANNING_IDLE_TICKS;
    static long SITTING_ATTACK_VIEW_RANGE;
    static long SITTING_CHARGE_VIEW_RANGE;

    virtual void tick();
    ~DragonScanningGoal();
    virtual void stop();
    virtual void start();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    DragonScanningGoal(EnderDragon &);
};
