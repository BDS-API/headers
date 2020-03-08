#pragma once

#include "../Mob"


class RandomSitGoal : Goal {

public:
    virtual RandomSitGoal::~RandomSitGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    RandomSitGoal(Mob &, float, float, float, float);
};
