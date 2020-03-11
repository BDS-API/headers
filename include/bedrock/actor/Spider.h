#pragma once

#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../util/BlockPos.h"
#include "./Monster.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/Block.h"


class Spider : Monster {

public:
    virtual ~Spider();
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
