#pragma once

#include "../../util/Vec3.h"
#include "Goal.h"
#include "../Mob.h"
#include <string>


class PanicGoal : Goal {

public:
    virtual void stop();
    ~PanicGoal();
    virtual void start();
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    PanicGoal(Mob &, float, bool, bool, bool);
    void _findWaterPos(Vec3 &, int, int);
};
