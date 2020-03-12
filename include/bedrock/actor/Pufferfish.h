#pragma once

#include "Fish.h"


class Pufferfish : Fish {

public:
    ~Pufferfish();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated();
    virtual void normalTick();
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    Pufferfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
