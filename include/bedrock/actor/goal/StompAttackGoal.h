#pragma once

#include "../Mob"
#include "../Actor"


class StompAttackGoal : MeleeAttackGoal {

public:
    virtual StompAttackGoal::~StompAttackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _attemptAttackTarget(Actor *);

    StompAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, bool);
};
