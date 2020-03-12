#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/Block.h"
#include "Monster.h"


class Spider : Monster {

public:
    virtual void aiStep();
    virtual void useNewAi()const;
    virtual void makeStuckInBlock(float);
    virtual void getModelScale()const;
    virtual void findAttackTarget();
    ~Spider();
    virtual void getShadowRadius()const;
    virtual void getSpiderType()const;
    virtual void normalTick();
    virtual void shouldRender()const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void _playStepSound(BlockPos const&, Block const&);
    Spider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
