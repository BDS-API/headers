#pragma once

#include <string>
#include "MeleeAttackGoal.h"


class DelayedAttackGoal : MeleeAttackGoal {

public:
    virtual bool canUse();
    ~DelayedAttackGoal();
    virtual void _attemptAttackTarget(Actor *);
    virtual void _attemptPathToTarget(Actor *);
    virtual void tick();
    virtual void start();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
//  DelayedAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, int, LevelSoundEvent); //TODO: incomplete function definition
    void _attemptMoveToTargetPosition(Actor *);
    void _isAttackObstructed(Actor const*, int)const;
    void _attemptStartAttacking(Actor const*);
    void _isAttackAnimationStillRunning()const;
    void _manageAttackTime();
};
