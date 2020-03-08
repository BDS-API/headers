#pragma once

#include "../EnderDragon"


class DragonFlamingGoal : Goal {

public:
    static long ROAR_DURATION;
    static long FLAME_DURATION;
    static long SITTING_FLAME_ATTACK_COUNT;
    static long WARMUP_TIME;

    virtual DragonFlamingGoal::~DragonFlamingGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    DragonFlamingGoal(EnderDragon &);
};
