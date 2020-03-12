#pragma once

#include <string>
#include "Goal.h"


class RollGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual bool canBeInterrupted();
    virtual void stop();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual bool canUse();
    ~RollGoal();
    void _handleRoll(int, Vec3 &, float &, float &)const;
    void _checkForDamagingBlocks()const;
    RollGoal(Mob &, float);
};
