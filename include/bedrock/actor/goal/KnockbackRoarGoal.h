#pragma once

#include <string>
#include "Goal.h"
#include "../../definition/DefinitionTrigger.h"


class KnockbackRoarGoal : Goal {

public:
    virtual void start();
    virtual bool canUse();
    ~KnockbackRoarGoal();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    KnockbackRoarGoal(Mob &, int, int, int, int, int, ActorFilterGroup const&, ActorFilterGroup const&, DefinitionTrigger, float);
};
