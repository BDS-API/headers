#pragma once

#include "../Mob"
#include "../../definition/DefinitionTrigger"
#include "../unmapped/ActorFilterGroup"


class KnockbackRoarGoal : Goal {

public:
    virtual KnockbackRoarGoal::~KnockbackRoarGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    KnockbackRoarGoal(Mob &, int, int, int, int, int, ActorFilterGroup const&, ActorFilterGroup const&, DefinitionTrigger, float);
};
