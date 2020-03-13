#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class TargetGoal : Goal {

public:
    ~TargetGoal(); // _ZN10TargetGoalD2Ev
    virtual bool canContinueToUse(); // _ZN10TargetGoal16canContinueToUseEv
    virtual void start(); // _ZN10TargetGoal5startEv
    virtual void stop(); // _ZN10TargetGoal4stopEv
    virtual void tick(); // _ZN10TargetGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK10TargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isTargetGoal()const; // _ZNK10TargetGoal12isTargetGoalEv
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**); // _ZN10TargetGoal10_canAttackEP3MobP5ActorbbPPK13MobDescriptor
    TargetGoal(Mob &, std::vector<MobDescriptor> const&, bool, int, bool, float, bool, int); // _ZN10TargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EEbibfbi
    void _withinRange(Actor const&); // _ZN10TargetGoal12_withinRangeERK5Actor
    void getFollowDistance()const; // _ZNK10TargetGoal17getFollowDistanceEv
    void _canAttack(Actor *, bool, MobDescriptor const**); // _ZN10TargetGoal10_canAttackEP5ActorbPPK13MobDescriptor
    void _canReach(Actor &); // _ZN10TargetGoal9_canReachER5Actor
};
