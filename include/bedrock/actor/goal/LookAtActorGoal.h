#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include "../Actor.h"
#include <string>


class LookAtActorGoal : Goal {

public:
    virtual ~LookAtActorGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    void getFilter();
    LookAtActorGoal(Mob &, float, float, int, int, int, int);
    void _withinFieldOfView(Actor &);
};
