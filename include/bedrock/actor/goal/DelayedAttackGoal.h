#pragma once

#include <string>
#include "MeleeAttackGoal.h"


class DelayedAttackGoal : MeleeAttackGoal {

public:
    ~DelayedAttackGoal(); // _ZN17DelayedAttackGoalD2Ev
    virtual bool canUse(); // _ZN17DelayedAttackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN17DelayedAttackGoal16canContinueToUseEv
    virtual void start(); // _ZN17DelayedAttackGoal5startEv
    virtual void stop(); // _ZN17DelayedAttackGoal4stopEv
    virtual void tick(); // _ZN17DelayedAttackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK17DelayedAttackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _attemptPathToTarget(Actor *); // _ZN17DelayedAttackGoal20_attemptPathToTargetEP5Actor
    virtual void _attemptAttackTarget(Actor *); // _ZN17DelayedAttackGoal20_attemptAttackTargetEP5Actor
//  DelayedAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, int, LevelSoundEvent); //TODO: incomplete function definition // _ZN17DelayedAttackGoalC2ER3Mobfbf13ActorCategoryifbii15LevelSoundEvent
    void _isAttackAnimationStillRunning()const; // _ZNK17DelayedAttackGoal30_isAttackAnimationStillRunningEv
    void _attemptMoveToTargetPosition(Actor *); // _ZN17DelayedAttackGoal28_attemptMoveToTargetPositionEP5Actor
    void _manageAttackTime(); // _ZN17DelayedAttackGoal17_manageAttackTimeEv
    void _attemptStartAttacking(Actor const*); // _ZN17DelayedAttackGoal22_attemptStartAttackingEPK5Actor
    void _isAttackObstructed(Actor const*, int)const; // _ZNK17DelayedAttackGoal19_isAttackObstructedEPK5Actori
};
