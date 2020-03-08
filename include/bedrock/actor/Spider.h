#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/MobEffectInstance"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/Block"


class Spider : Monster {

public:
    Spider::~Spider()
    virtual void normalTick();
    virtual void makeStuckInBlock(float);
    virtual void getShadowRadius()const;
    virtual void findAttackTarget();
    virtual void shouldRender()const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void aiStep();
    virtual void useNewAi()const;
    virtual void getModelScale()const;
    virtual void getSpiderType()const;

    Spider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
