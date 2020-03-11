#pragma once

#include "../../util/Vec3.h"
#include "./Goal.h"
#include "../Mob.h"
#include <string>


class RollGoal : Goal {

public:
    virtual ~RollGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    RollGoal(Mob &, float);
    void _checkForDamagingBlocks()const;
    void _handleRoll(int, Vec3 &, float &, float &)const;
};
