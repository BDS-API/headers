#pragma once

#include "../Mob"


class KnockbackRoarGoal : Goal {

public:
    virtual KnockbackRoarGoal::~KnockbackRoarGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    KnockbackRoarGoal(Mob &, int, int, int, int, int, ActorFilterGroup const&, ActorFilterGroup const&, DefinitionTrigger, float);
};
