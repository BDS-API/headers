#pragma once

#include <string>
#include "Goal.h"


class PanicGoal : Goal {

public:
    virtual void start();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    ~PanicGoal();
    PanicGoal(Mob &, float, bool, bool, bool);
    void _findWaterPos(Vec3 &, int, int);
};
