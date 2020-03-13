#pragma once

#include "HumanoidMonster.h"
#include <vector>


class Skeleton : HumanoidMonster {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    ~Skeleton(); // _ZN8SkeletonD2Ev
    virtual void normalTick(); // _ZN8Skeleton10normalTickEv
    virtual void rideTick(); // _ZN8Skeleton8rideTickEv
    virtual void getRidingHeight(); // _ZN8Skeleton15getRidingHeightEv
    virtual void setTarget(Actor *); // _ZN8Skeleton9setTargetEP5Actor
    virtual bool canBeAffected(MobEffectInstance const&)const; // _ZNK8Skeleton13canBeAffectedERK17MobEffectInstance
    virtual void getDebugText(std::vector<std::string> &); // _ZN8Skeleton12getDebugTextERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    virtual void die(ActorDamageSource const&); // _ZN8Skeleton3dieERK17ActorDamageSource
    virtual void doHurtTarget(Actor *); // _ZN8Skeleton12doHurtTargetEP5Actor
    virtual void useNewAi()const; // _ZNK8Skeleton8useNewAiEv
    Skeleton(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN8SkeletonC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
//  void setSkeletonType(Skeleton::SkeletonType); //TODO: incomplete function definition // _ZN8Skeleton15setSkeletonTypeENS_12SkeletonTypeE
    void getSkeletonType()const; // _ZNK8Skeleton15getSkeletonTypeEv
    void setWitherParent(WitherBoss *); // _ZN8Skeleton15setWitherParentEP10WitherBoss
};
