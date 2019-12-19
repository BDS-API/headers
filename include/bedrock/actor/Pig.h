#pragma once

class Pig : Animal {

public:
    virtual Pig::~Pig();
    virtual void normalTick(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void useNewAi(void)const;

    Pig(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
