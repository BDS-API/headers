#pragma once

#include "Animal.h"


class Llama : Animal {

public:
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void onFailedTame();
    virtual void useNewAi()const;
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void causeFallDamage(float);
    ~Llama();
    virtual void getArmorValue();
    Llama(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
