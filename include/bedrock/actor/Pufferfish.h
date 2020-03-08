#pragma once

#include "../../unmapped/RenderParams"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class Pufferfish : Fish {

public:
    virtual Pufferfish::~Pufferfish()
    virtual void normalTick();
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated();

    Pufferfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
