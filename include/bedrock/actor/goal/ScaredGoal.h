#pragma once

#include "../Mob"


class ScaredGoal : Goal {

public:
    virtual ScaredGoal::~ScaredGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    ScaredGoal(Mob &, int);
};
