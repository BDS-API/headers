#pragma once

#include "../../definition/DefinitionTrigger.h"
#include "../unmapped/ActorFilterGroup.h"
#include "./Goal.h"
#include "../Mob.h"
#include <string>


class KnockbackRoarGoal : Goal {

public:
    virtual ~KnockbackRoarGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    KnockbackRoarGoal(Mob &, int, int, int, int, int, ActorFilterGroup const&, ActorFilterGroup const&, DefinitionTrigger, float);
};
