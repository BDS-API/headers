#pragma once

#include "../Mob"


class RandomLookAroundAndSitGoal : RandomLookAroundGoal {

public:
    virtual RandomLookAroundAndSitGoal::~RandomLookAroundAndSitGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    RandomLookAroundAndSitGoal(Mob &, int, int, int, int, float);
    void _areMobConditionsMet();
    void _resetLook();
};
