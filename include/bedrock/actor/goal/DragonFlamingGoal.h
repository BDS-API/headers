#pragma once

#include "./Goal.h"
#include "../EnderDragon.h"
#include <string>


class DragonFlamingGoal : Goal {

public:
    static long ROAR_DURATION;
    static long FLAME_DURATION;
    static long SITTING_FLAME_ATTACK_COUNT;
    static long WARMUP_TIME;

    virtual ~DragonFlamingGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DragonFlamingGoal(EnderDragon &);
};
