#pragma once

#include "../../util/Vec3.h"
#include "./Goal.h"
#include "../Mob.h"
#include <string>


class PanicGoal : Goal {

public:
    virtual ~PanicGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    PanicGoal(Mob &, float, bool, bool, bool);
    void _findWaterPos(Vec3 &, int, int);
};
