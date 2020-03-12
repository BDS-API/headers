#pragma once

#include "../Actor.h"
#include <string>
#include "../Mob.h"
#include "MeleeAttackGoal.h"


class DelayedAttackGoal : MeleeAttackGoal {

public:
    virtual bool canContinueToUse();
    virtual bool canUse();
    ~DelayedAttackGoal();
    virtual void _attemptAttackTarget(Actor *);
    virtual void start();
    virtual void tick();
    virtual void stop();
    virtual void _attemptPathToTarget(Actor *);
    virtual void appendDebugInfo(std::string &)const;
    void _manageAttackTime();
    void _isAttackAnimationStillRunning()const;
    void _attemptMoveToTargetPosition(Actor *);
    void _isAttackObstructed(Actor const*, int)const;
//  DelayedAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, int, LevelSoundEvent); //TODO: incomplete function definition
    void _attemptStartAttacking(Actor const*);
};
