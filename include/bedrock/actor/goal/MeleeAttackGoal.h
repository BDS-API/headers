#pragma once

#include "../Mob"
#include "../Actor"
#include "../../definition/DefinitionTrigger"


class MeleeAttackGoal : Goal {

public:
    static long ATTACK_LOOK_DISTANCE;
    static long MIN_RECALC_TIME;
    static long MAX_RECALC_TIME;
    static long VERY_FAR_DISTANCE_SQUARED;
    static long FAR_DISTANCE_SQUARED;
    static long VERY_FAR_DISTANCE_RECALC_TIME_INCREASE;
    static long FAR_DISTANCE_RECALC_TIME_INCREASE;
    static long DEFAULT_RECALC_TIME;

    virtual MeleeAttackGoal::~MeleeAttackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _getAttackReachSqr();
    virtual void _lookAtTarget(Actor *)const;
    virtual void _mobCanPathToTarget(Actor const*)const;
    virtual void _shouldRecalculatePath(Actor const*);
    virtual void _recalculateTargetPosition(Actor const*);
    virtual void _adjustTimeToRecalculatePath(float);
    virtual void _attemptPathToTarget(Actor *);
    virtual void _attemptAttackTarget(Actor *);

    MeleeAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, bool, DefinitionTrigger);
    void _targetPositionPutsMobInSun();
    void _getAttackReach();
    void _inSunlight(Actor const&)const;
};
