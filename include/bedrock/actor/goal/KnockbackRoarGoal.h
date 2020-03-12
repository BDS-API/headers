#pragma once

#include <string>
#include "../Mob.h"
#include "../unmapped/ActorFilterGroup.h"
#include "Goal.h"
#include "../../definition/DefinitionTrigger.h"


class KnockbackRoarGoal : Goal {

public:
    virtual void tick();
    virtual bool canUse();
    virtual void stop();
    virtual bool canContinueToUse();
    ~KnockbackRoarGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    KnockbackRoarGoal(Mob &, int, int, int, int, int, ActorFilterGroup const&, ActorFilterGroup const&, DefinitionTrigger, float);
};
