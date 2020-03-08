#pragma once

#include "../Mob"


class FindMountGoal : Goal {

public:
    virtual FindMountGoal::~FindMountGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    FindMountGoal(Mob &, float, int, bool, bool, float, int);
    bool isInMountRange(void);
    void getAttackReachSqr(void);
};
