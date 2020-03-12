#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Actor.h"
#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/Block.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"


class IronGolem : Mob {

public:
    ~IronGolem();
    virtual void doHurtTarget(Actor *);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void aiStep();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getShadowRadius()const;
    virtual void die(ActorDamageSource const&);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void useNewAi()const;
    IronGolem(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getAttackAnimationTick()const;
    void getOfferFlowerTick()const;
    void offerFlower(bool);
};
