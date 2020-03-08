#pragma once

#include "../Mob"


class MountPathingGoal : Goal {

public:
    virtual MountPathingGoal::~MountPathingGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _getAttackReachSqr();

    void _init(float, float, bool);
    MountPathingGoal(Mob &, float, float, bool);
};
