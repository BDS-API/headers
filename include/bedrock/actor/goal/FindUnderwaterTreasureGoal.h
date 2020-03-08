#pragma once

#include "../Mob"


class FindUnderwaterTreasureGoal : Goal {

public:
    FindUnderwaterTreasureGoal::~FindUnderwaterTreasureGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FindUnderwaterTreasureGoal(Mob &, float, int, int);
};
