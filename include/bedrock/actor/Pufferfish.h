#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionIdentifier"


class Pufferfish : Fish {

public:
    Pufferfish::~Pufferfish()
    virtual void normalTick();
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated();

    Pufferfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
