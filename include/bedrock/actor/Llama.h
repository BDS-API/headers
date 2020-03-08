#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/RenderParams"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/Block"


class Llama : Animal {

public:
    Llama::~Llama()
    virtual void onFailedTame();
    virtual void causeFallDamage(float);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void getArmorValue();
    virtual void useNewAi()const;

    Llama(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
