#pragma once

#include "Animal.h"


class Pig : Animal {

public:
    ~Pig(); // _ZN3PigD2Ev
    virtual void normalTick(); // _ZN3Pig10normalTickEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN3Pig5_hurtERK17ActorDamageSourceibb
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN3Pig14_playStepSoundERK8BlockPosRK5Block
    virtual void useNewAi()const; // _ZNK3Pig8useNewAiEv
    Pig(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN3PigC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
