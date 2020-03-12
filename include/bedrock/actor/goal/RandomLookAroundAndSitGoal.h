#pragma once

#include "RandomLookAroundGoal.h"
#include "../Mob.h"
#include <string>


class RandomLookAroundAndSitGoal : RandomLookAroundGoal {

public:
    virtual void tick();
    virtual bool canUse();
    virtual void stop();
    virtual bool canContinueToUse();
    ~RandomLookAroundAndSitGoal();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    RandomLookAroundAndSitGoal(Mob &, int, int, int, int, float);
    void _resetLook();
    void _areMobConditionsMet();
};
