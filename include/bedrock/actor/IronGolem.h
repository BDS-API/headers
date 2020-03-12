#pragma once

#include "Mob.h"


class IronGolem : Mob {

public:
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getShadowRadius()const;
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void doHurtTarget(Actor *);
    virtual void die(ActorDamageSource const&);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void aiStep();
    ~IronGolem();
    virtual void useNewAi()const;
    void offerFlower(bool);
    IronGolem(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getOfferFlowerTick()const;
    void getAttackAnimationTick()const;
};
