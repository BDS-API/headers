#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include <string>
#include "Actor.h"
#include "WitherBoss.h"
#include "HumanoidMonster.h"
#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include <vector>
#include "damagesource/ActorDamageSource.h"


class Skeleton : HumanoidMonster {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    virtual void die(ActorDamageSource const&);
    virtual void setTarget(Actor *);
    virtual void doHurtTarget(Actor *);
    virtual void rideTick();
    virtual void getDebugText(std::vector<std::string> &);
    virtual void normalTick();
    virtual void useNewAi()const;
    ~Skeleton();
    virtual void getRidingHeight();
    virtual bool canBeAffected(MobEffectInstance const&)const;
    void setWitherParent(WitherBoss *);
//  void setSkeletonType(Skeleton::SkeletonType); //TODO: incomplete function definition
    Skeleton(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getSkeletonType()const;
};
