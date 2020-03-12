#pragma once

#include <string>
#include "Goal.h"


class MountPathingGoal : Goal {

public:
    virtual void start();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void _getAttackReachSqr();
    ~MountPathingGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    MountPathingGoal(Mob &, float, float, bool);
    void _init(float, float, bool);
};
