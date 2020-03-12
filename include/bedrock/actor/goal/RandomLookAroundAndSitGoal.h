#pragma once

#include <string>
#include "RandomLookAroundGoal.h"


class RandomLookAroundAndSitGoal : RandomLookAroundGoal {

public:
    virtual bool canUse();
    ~RandomLookAroundAndSitGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    void _areMobConditionsMet();
    void _resetLook();
    RandomLookAroundAndSitGoal(Mob &, int, int, int, int, float);
};
