#pragma once

#include "../Mob"


class SwimIdleGoal : Goal {

public:
    SwimIdleGoal::~SwimIdleGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SwimIdleGoal(Mob &);
};
