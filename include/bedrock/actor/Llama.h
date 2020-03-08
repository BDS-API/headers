#pragma once

#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"


class Llama : Animal {

public:
    virtual Llama::~Llama()
    virtual void onFailedTame();
    virtual void causeFallDamage(float);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void getArmorValue();
    virtual void useNewAi()const;

    Llama(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
