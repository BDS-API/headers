#pragma once

#include <string>
#include "../Actor.h"
#include "../Mob.h"
#include "Goal.h"
#include "../../definition/DefinitionTrigger.h"


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

    virtual void _recalculateTargetPosition(Actor const*);
    virtual void _lookAtTarget(Actor *)const;
    virtual void _mobCanPathToTarget(Actor const*)const;
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void _getAttackReachSqr();
    ~MeleeAttackGoal();
    virtual void tick();
    virtual void _adjustTimeToRecalculatePath(float);
    virtual void _attemptPathToTarget(Actor *);
    virtual void _attemptAttackTarget(Actor *);
    virtual void start();
    virtual void _shouldRecalculatePath(Actor const*);
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    void _getAttackReach();
    void _inSunlight(Actor const&)const;
    void _targetPositionPutsMobInSun();
//  MeleeAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, bool, DefinitionTrigger); //TODO: incomplete function definition
};
