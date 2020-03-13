#pragma once

#include "Mob.h"


class IronGolem : Mob {

public:
    ~IronGolem(); // _ZN9IronGolemD2Ev
    virtual void getShadowRadius()const; // _ZNK9IronGolem15getShadowRadiusEv
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN9IronGolem17handleEntityEventE10ActorEventi
    virtual void die(ActorDamageSource const&); // _ZN9IronGolem3dieERK17ActorDamageSource
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN9IronGolem35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN9IronGolem14_playStepSoundERK8BlockPosRK5Block
    virtual void aiStep(); // _ZN9IronGolem6aiStepEv
    virtual void doHurtTarget(Actor *); // _ZN9IronGolem12doHurtTargetEP5Actor
    virtual void useNewAi()const; // _ZNK9IronGolem8useNewAiEv
    IronGolem(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9IronGolemC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void getAttackAnimationTick()const; // _ZNK9IronGolem22getAttackAnimationTickEv
    void offerFlower(bool); // _ZN9IronGolem11offerFlowerEb
    void getOfferFlowerTick()const; // _ZNK9IronGolem18getOfferFlowerTickEv
};
