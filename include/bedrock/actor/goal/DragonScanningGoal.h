#pragma once

#include "../EnderDragon"


class DragonScanningGoal : Goal {

public:
    static long SITTING_SCANNING_IDLE_TICKS;
    static long SITTING_ATTACK_VIEW_RANGE;
    static long SITTING_CHARGE_VIEW_RANGE;

    virtual DragonScanningGoal::~DragonScanningGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DragonScanningGoal(EnderDragon &);
};
