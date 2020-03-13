#pragma once

#include "Monster.h"


class Spider : Monster {

public:
    ~Spider(); // _ZN6SpiderD2Ev
    virtual void normalTick(); // _ZN6Spider10normalTickEv
    virtual void makeStuckInBlock(float); // _ZN6Spider16makeStuckInBlockEf
    virtual void getShadowRadius()const; // _ZNK6Spider15getShadowRadiusEv
    virtual void findAttackTarget(); // _ZN6Spider16findAttackTargetEv
    virtual void shouldRender()const; // _ZNK6Spider12shouldRenderEv
    virtual bool canBeAffected(MobEffectInstance const&)const; // _ZNK6Spider13canBeAffectedERK17MobEffectInstance
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN6Spider14_playStepSoundERK8BlockPosRK5Block
    virtual void aiStep(); // _ZN6Spider6aiStepEv
    virtual void useNewAi()const; // _ZNK6Spider8useNewAiEv
    virtual void getModelScale()const; // _ZNK6Spider13getModelScaleEv
    virtual void getSpiderType()const; // _ZNK6Spider13getSpiderTypeEv
    Spider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN6SpiderC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
