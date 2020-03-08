#pragma once

#include "../Mob"


class RandomLookAroundGoal : Goal {

public:
    virtual RandomLookAroundGoal::~RandomLookAroundGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    RandomLookAroundGoal(Mob &, int, int, float);
};
