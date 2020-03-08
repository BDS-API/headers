#pragma once

#include "../Mob"


class FindMountGoal : Goal {

public:
    virtual FindMountGoal::~FindMountGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FindMountGoal(Mob &, float, int, bool, bool, float, int);
    bool isInMountRange();
    void getAttackReachSqr();
};
