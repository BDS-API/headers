#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/MobEffectInstance"
#include "unmapped/ActorDefinitionIdentifier"


class Skeleton : HumanoidMonster {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    Skeleton::~Skeleton()
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
    void setSkeletonType(Skeleton::SkeletonType);
    void getSkeletonType()const;
    void setWitherParent(WitherBoss *);
};
