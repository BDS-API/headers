#pragma once

#include "../Mob"


class SwimIdleGoal : Goal {

public:
    virtual SwimIdleGoal::~SwimIdleGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SwimIdleGoal(Mob &);
};
