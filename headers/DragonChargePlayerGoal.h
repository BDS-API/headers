#pragma once

class DragonChargePlayerGoal : Goal {

public:
    static long DragonChargePlayerGoal::CHARGE_RECOVERY_TIME;
    static long DragonChargePlayerGoal::SITTING_CHARGE_VIEW_RANGE;

    virtual ~DragonChargePlayerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void DragonChargePlayerGoal(EnderDragon &);
};
