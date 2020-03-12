#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "../../unmapped/RenderParams.h"
#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/Block.h"


class Llama : Animal {

public:
    virtual void getArmorValue();
    virtual void causeFallDamage(float);
    virtual void onFailedTame();
    ~Llama();
    virtual void useNewAi()const;
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    Llama(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
