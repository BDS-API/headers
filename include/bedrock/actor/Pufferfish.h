#pragma once

#include "Fish.h"


class Pufferfish : Fish {

public:
    ~Pufferfish(); // _ZN10PufferfishD2Ev
    virtual void normalTick(); // _ZN10Pufferfish10normalTickEv
    virtual void startRiding(Actor &); // _ZN10Pufferfish11startRidingER5Actor
    virtual void playerTouch(Player &); // _ZN10Pufferfish11playerTouchER6Player
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN10Pufferfish35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN10Pufferfish5_hurtERK17ActorDamageSourceibb
    virtual void _onSizeUpdated(); // _ZN10Pufferfish14_onSizeUpdatedEv
    Pufferfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN10PufferfishC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
