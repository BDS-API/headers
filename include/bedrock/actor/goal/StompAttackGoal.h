#pragma once

#include "./MeleeAttackGoal.h"
#include "../Actor.h"
#include "../Mob.h"
#include <string>


class StompAttackGoal : MeleeAttackGoal {

public:
    virtual ~StompAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _attemptAttackTarget(Actor *);

//  StompAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, bool); //TODO: incomplete function definition
};
