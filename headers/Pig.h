#pragma once

class Pig : Animal {

public:
    virtual ~Pig();
    virtual void normalTick(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void useNewAi(void)const;

    void Pig(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
