#pragma once

#include "../../util/Vec3.h"
#include "Goal.h"
#include "../Mob.h"
#include <string>


class RollGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void tick();
    ~RollGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    void _handleRoll(int, Vec3 &, float &, float &)const;
    void _checkForDamagingBlocks()const;
    RollGoal(Mob &, float);
};
