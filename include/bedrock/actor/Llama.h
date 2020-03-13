#pragma once

#include "Animal.h"


class Llama : Animal {

public:
    ~Llama(); // _ZN5LlamaD2Ev
    virtual void onFailedTame(); // _ZN5Llama12onFailedTameEv
    virtual void causeFallDamage(float); // _ZN5Llama15causeFallDamageEf
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN5Llama35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN5Llama14_playStepSoundERK8BlockPosRK5Block
    virtual void getArmorValue(); // _ZN5Llama13getArmorValueEv
    virtual void useNewAi()const; // _ZNK5Llama8useNewAiEv
    Llama(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5LlamaC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
