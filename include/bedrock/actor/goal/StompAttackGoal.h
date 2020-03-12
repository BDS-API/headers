#pragma once

#include "../Actor.h"
#include <string>
#include "../Mob.h"
#include "MeleeAttackGoal.h"


class StompAttackGoal : MeleeAttackGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    ~StompAttackGoal();
    virtual void stop();
    virtual void tick();
    virtual void _attemptAttackTarget(Actor *);
    virtual bool canUse();
    virtual bool canContinueToUse();
//  StompAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, bool); //TODO: incomplete function definition
};
