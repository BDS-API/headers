#pragma once

#include "../Actor.h"
#include "Goal.h"
#include "../Mob.h"
#include <string>


class LookAtActorGoal : Goal {

public:
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual void start();
    virtual bool canUse();
    ~LookAtActorGoal();
    LookAtActorGoal(Mob &, float, float, int, int, int, int);
    void getFilter();
    void _withinFieldOfView(Actor &);
};
