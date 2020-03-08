#pragma once

#include "../Mob"
#include "../Actor"


class DelayedAttackGoal : MeleeAttackGoal {

public:
    virtual DelayedAttackGoal::~DelayedAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _attemptPathToTarget(Actor *);
    virtual void _attemptAttackTarget(Actor *);

    DelayedAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, int, LevelSoundEvent);
    void _isAttackAnimationStillRunning(void)const;
    void _attemptMoveToTargetPosition(Actor *);
    void _manageAttackTime(void);
    void _attemptStartAttacking(Actor const*);
    void _isAttackObstructed(Actor const*, int)const;
};
