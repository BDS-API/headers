#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class MountPathingGoal : Goal {

public:
    virtual void _getAttackReachSqr();
    virtual void stop();
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    ~MountPathingGoal();
    virtual void tick();
    MountPathingGoal(Mob &, float, float, bool);
    void _init(float, float, bool);
};
