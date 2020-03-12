#pragma once

#include "Monster.h"


class Spider : Monster {

public:
    ~Spider();
    virtual void makeStuckInBlock(float);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void aiStep();
    virtual void getModelScale()const;
    virtual void getSpiderType()const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void normalTick();
    virtual void useNewAi()const;
    virtual void getShadowRadius()const;
    virtual void findAttackTarget();
    virtual void shouldRender()const;
    Spider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
