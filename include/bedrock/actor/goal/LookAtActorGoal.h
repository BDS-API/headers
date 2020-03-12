#pragma once

#include <string>
#include "Goal.h"


class LookAtActorGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    ~LookAtActorGoal();
    virtual void stop();
    virtual bool canUse();
    virtual void start();
    virtual void tick();
    LookAtActorGoal(Mob &, float, float, int, int, int, int);
    void getFilter();
    void _withinFieldOfView(Actor &);
};
