#pragma once

class IronGolem : Mob {

public:
    virtual IronGolem::~IronGolem();
    virtual void getShadowRadius(void)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void die(ActorDamageSource const&);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void aiStep(void);
    virtual void doHurtTarget(Actor *);
    virtual void useNewAi(void)const;

    IronGolem(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getAttackAnimationTick(void)const;
    void offerFlower(bool);
    void getOfferFlowerTick(void)const;
};
