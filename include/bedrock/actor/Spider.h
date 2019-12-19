#pragma once

class Spider : Monster {

public:
    virtual Spider::~Spider();
    virtual void normalTick(void);
    virtual void makeStuckInBlock(float);
    virtual void getShadowRadius(void)const;
    virtual void findAttackTarget(void);
    virtual void shouldRender(void)const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void aiStep(void);
    virtual void useNewAi(void)const;
    virtual void getModelScale(void)const;
    virtual void getSpiderType(void)const;

    Spider(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
