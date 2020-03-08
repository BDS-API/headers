#pragma once

#include "../../unmapped/MobEffectInstance"
#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "unmapped/ActorDefinitionIdentifier"


class Spider : Monster {

public:
    virtual Spider::~Spider()
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
