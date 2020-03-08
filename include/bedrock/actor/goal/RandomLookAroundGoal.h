#pragma once

#include "../Mob"


class RandomLookAroundGoal : Goal {

public:
    virtual RandomLookAroundGoal::~RandomLookAroundGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    RandomLookAroundGoal(Mob &, int, int, float);
};
