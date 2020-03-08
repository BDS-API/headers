#pragma once

#include "../Mob"


class RunAroundLikeCrazyGoal : Goal {

public:
    virtual RunAroundLikeCrazyGoal::~RunAroundLikeCrazyGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    RunAroundLikeCrazyGoal(Mob &, float);
};
