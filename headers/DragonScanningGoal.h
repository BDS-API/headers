#pragma once

class DragonScanningGoal : Goal {

public:
    static long DragonScanningGoal::SITTING_SCANNING_IDLE_TICKS;
    static long DragonScanningGoal::SITTING_ATTACK_VIEW_RANGE;
    static long DragonScanningGoal::SITTING_CHARGE_VIEW_RANGE;

    virtual ~DragonScanningGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void DragonScanningGoal(EnderDragon &);
};
