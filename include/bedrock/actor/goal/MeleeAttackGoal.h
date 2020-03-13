#pragma once

#include <string>
#include "../../definition/DefinitionTrigger.h"
#include "Goal.h"


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

    ~MeleeAttackGoal(); // _ZN15MeleeAttackGoalD2Ev
    virtual bool canUse(); // _ZN15MeleeAttackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15MeleeAttackGoal16canContinueToUseEv
    virtual void start(); // _ZN15MeleeAttackGoal5startEv
    virtual void stop(); // _ZN15MeleeAttackGoal4stopEv
    virtual void tick(); // _ZN15MeleeAttackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15MeleeAttackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _getAttackReachSqr(); // _ZN15MeleeAttackGoal18_getAttackReachSqrEv
    virtual void _lookAtTarget(Actor *)const; // _ZNK15MeleeAttackGoal13_lookAtTargetEP5Actor
    virtual void _mobCanPathToTarget(Actor const*)const; // _ZNK15MeleeAttackGoal19_mobCanPathToTargetEPK5Actor
    virtual void _shouldRecalculatePath(Actor const*); // _ZN15MeleeAttackGoal22_shouldRecalculatePathEPK5Actor
    virtual void _recalculateTargetPosition(Actor const*); // _ZN15MeleeAttackGoal26_recalculateTargetPositionEPK5Actor
    virtual void _adjustTimeToRecalculatePath(float); // _ZN15MeleeAttackGoal28_adjustTimeToRecalculatePathEf
    virtual void _attemptPathToTarget(Actor *); // _ZN15MeleeAttackGoal20_attemptPathToTargetEP5Actor
    virtual void _attemptAttackTarget(Actor *); // _ZN15MeleeAttackGoal20_attemptAttackTargetEP5Actor
//  MeleeAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, bool, DefinitionTrigger); //TODO: incomplete function definition // _ZN15MeleeAttackGoalC2ER3Mobfbf13ActorCategoryifbb17DefinitionTrigger
    void _targetPositionPutsMobInSun(); // _ZN15MeleeAttackGoal27_targetPositionPutsMobInSunEv
    void _getAttackReach(); // _ZN15MeleeAttackGoal15_getAttackReachEv
    void _inSunlight(Actor const&)const; // _ZNK15MeleeAttackGoal11_inSunlightERK5Actor
};
