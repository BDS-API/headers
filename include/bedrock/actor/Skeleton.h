#pragma once

#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include <memory>
#include "damagesource/ActorDamageSource.h"
#include "./WitherBoss.h"
#include "./HumanoidMonster.h"
#include <vector>
#include "unmapped/ActorDefinitionGroup.h"
#include <string>


class Skeleton : HumanoidMonster {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    virtual ~Skeleton();
    virtual void normalTick();
    virtual void rideTick();
    virtual void getRidingHeight();
    virtual void setTarget(Actor *);
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void getDebugText(std::vector<std::string, std::allocator<std::string>> &);
    virtual void die(ActorDamageSource const&);
    virtual void doHurtTarget(Actor *);
    virtual void useNewAi()const;

    Skeleton(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
//  void setSkeletonType(Skeleton::SkeletonType); //TODO: incomplete function definition
    void getSkeletonType()const;
    void setWitherParent(WitherBoss *);
};
