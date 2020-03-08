#pragma once

#include "../Mob"


class RandomBreachingGoal : RandomStrollGoal {

public:
    virtual RandomBreachingGoal::~RandomBreachingGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _setWantedPosition();

    RandomBreachingGoal(Mob &, float, int, int, int, float);
};
