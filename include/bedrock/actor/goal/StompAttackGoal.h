#pragma once

#include <string>
#include "MeleeAttackGoal.h"


class StompAttackGoal : MeleeAttackGoal {

public:
    ~StompAttackGoal(); // _ZN15StompAttackGoalD2Ev
    virtual bool canUse(); // _ZN15StompAttackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15StompAttackGoal16canContinueToUseEv
    virtual void start(); // _ZN15StompAttackGoal5startEv
    virtual void stop(); // _ZN15StompAttackGoal4stopEv
    virtual void tick(); // _ZN15StompAttackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15StompAttackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _attemptAttackTarget(Actor *); // _ZN15StompAttackGoal20_attemptAttackTargetEP5Actor
//  StompAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, bool); //TODO: incomplete function definition // _ZN15StompAttackGoalC2ER3Mobfbf13ActorCategoryifbib
};
