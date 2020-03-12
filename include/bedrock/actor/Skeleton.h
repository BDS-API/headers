#pragma once

#include <vector>
#include "HumanoidMonster.h"


class Skeleton : HumanoidMonster {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    virtual void getDebugText(std::vector<std::string> &);
    virtual void rideTick();
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void setTarget(Actor *);
    virtual void useNewAi()const;
    virtual void die(ActorDamageSource const&);
    virtual void normalTick();
    ~Skeleton();
    virtual void getRidingHeight();
    virtual void doHurtTarget(Actor *);
//  void setSkeletonType(Skeleton::SkeletonType); //TODO: incomplete function definition
    void setWitherParent(WitherBoss *);
    Skeleton(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getSkeletonType()const;
};
