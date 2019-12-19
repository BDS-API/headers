#pragma once

class Skeleton : HumanoidMonster {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    virtual Skeleton::~Skeleton();
    virtual void normalTick(void);
    virtual void rideTick(void);
    virtual void getRidingHeight(void);
    virtual void setTarget(Actor *);
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void getDebugText(std::vector<std::string, std::allocator<std::string>> &);
    virtual void die(ActorDamageSource const&);
    virtual void doHurtTarget(Actor *);
    virtual void useNewAi(void)const;

    Skeleton(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setSkeletonType(Skeleton::SkeletonType);
    void getSkeletonType(void)const;
    void setWitherParent(WitherBoss *);
};
