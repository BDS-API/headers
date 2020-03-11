#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"
#include "../util/BlockPos.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/Block.h"


class Llama : Animal {

public:
    virtual ~Llama();
    virtual void onFailedTame();
    virtual void causeFallDamage(float);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void getArmorValue();
    virtual void useNewAi()const;

    Llama(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
