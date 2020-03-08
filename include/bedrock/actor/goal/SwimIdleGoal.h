#pragma once

#include "../Mob"


class SwimIdleGoal : Goal {

public:
    virtual SwimIdleGoal::~SwimIdleGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SwimIdleGoal(Mob &);
};
