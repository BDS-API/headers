#pragma once

#include "../Mob"


class RunAroundLikeCrazyGoal : Goal {

public:
    virtual RunAroundLikeCrazyGoal::~RunAroundLikeCrazyGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    RunAroundLikeCrazyGoal(Mob &, float);
};
