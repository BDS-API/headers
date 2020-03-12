#pragma once

#include <string>
#include "RandomStrollGoal.h"


class RandomBreachingGoal : RandomStrollGoal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual void _setWantedPosition();
    virtual bool canBeInterrupted();
    ~RandomBreachingGoal();
    virtual bool canContinueToUse();
    virtual void stop();
    RandomBreachingGoal(Mob &, float, int, int, int, float);
};
