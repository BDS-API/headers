#pragma once

class Llama : Animal {

public:
    virtual Llama::~Llama();
    virtual void onFailedTame(void);
    virtual void causeFallDamage(float);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void getArmorValue(void);
    virtual void useNewAi(void)const;

    Llama(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
