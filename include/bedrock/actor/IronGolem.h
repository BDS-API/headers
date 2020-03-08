#pragma once

#include "../../unmapped/RenderParams"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "unmapped/ActorDefinitionIdentifier"


class IronGolem : Mob {

public:
    virtual IronGolem::~IronGolem()
    virtual void getShadowRadius()const;
    virtual void handleEntityEvent(ActorEvent, int);
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
