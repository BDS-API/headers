#pragma once

#include <string>
#include "MeleeAttackGoal.h"


class StompAttackGoal : MeleeAttackGoal {

public:
    virtual void stop();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    ~StompAttackGoal();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void _attemptAttackTarget(Actor *);
    virtual bool canUse();
//  StompAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, bool); //TODO: incomplete function definition
};
