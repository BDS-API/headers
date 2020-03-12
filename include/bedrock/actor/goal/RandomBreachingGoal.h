#pragma once

#include "RandomStrollGoal.h"
#include "../Mob.h"
#include <string>


class RandomBreachingGoal : RandomStrollGoal {

public:
    virtual void start();
    virtual void _setWantedPosition();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    ~RandomBreachingGoal();
    virtual bool canBeInterrupted();
    RandomBreachingGoal(Mob &, float, int, int, int, float);
};
