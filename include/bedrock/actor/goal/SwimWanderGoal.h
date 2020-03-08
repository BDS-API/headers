#pragma once

#include "../Mob"


class SwimWanderGoal : Goal {

public:
    virtual SwimWanderGoal::~SwimWanderGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SwimWanderGoal(Mob &, float, float, int);
    void _setWantedPosition(void);
    void wanderComplete(void);
};
