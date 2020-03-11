#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "./Mob.h"
#include "../util/BlockPos.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/Block.h"


class IronGolem : Mob {

public:
    virtual ~IronGolem();
    virtual void getShadowRadius()const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void die(ActorDamageSource const&);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void aiStep();
    virtual void doHurtTarget(Actor *);
    virtual void useNewAi()const;

    IronGolem(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getAttackAnimationTick()const;
    void offerFlower(bool);
    void getOfferFlowerTick()const;
};
