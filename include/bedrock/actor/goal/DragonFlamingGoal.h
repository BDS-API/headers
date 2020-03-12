#pragma once

#include "../EnderDragon.h"
#include "Goal.h"
#include <string>


class DragonFlamingGoal : Goal {

public:
    static long ROAR_DURATION;
    static long FLAME_DURATION;
    static long SITTING_FLAME_ATTACK_COUNT;
    static long WARMUP_TIME;

    virtual void start();
    virtual bool canContinueToUse();
    ~DragonFlamingGoal();
    virtual void tick();
    virtual void stop();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    DragonFlamingGoal(EnderDragon &);
};
