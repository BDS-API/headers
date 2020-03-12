#pragma once

#include <string>
#include "Goal.h"


class DragonFlamingGoal : Goal {

public:
    static long ROAR_DURATION;
    static long FLAME_DURATION;
    static long SITTING_FLAME_ATTACK_COUNT;
    static long WARMUP_TIME;

    virtual void tick();
    virtual void start();
    virtual void stop();
    virtual bool canContinueToUse();
    ~DragonFlamingGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    DragonFlamingGoal(EnderDragon &);
};
