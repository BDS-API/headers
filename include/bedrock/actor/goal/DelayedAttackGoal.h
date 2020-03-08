#pragma once

#include "../Mob"
#include "../Actor"


class DelayedAttackGoal : MeleeAttackGoal {

public:
    virtual DelayedAttackGoal::~DelayedAttackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _attemptPathToTarget(Actor *);
    virtual void _attemptAttackTarget(Actor *);

    DelayedAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, int, LevelSoundEvent);
    void _isAttackAnimationStillRunning()const;
    void _attemptMoveToTargetPosition(Actor *);
    void _manageAttackTime();
    void _attemptStartAttacking(Actor const*);
    void _isAttackObstructed(Actor const*, int)const;
};
