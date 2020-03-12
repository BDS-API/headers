#pragma once

#include "Player.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../../unmapped/RenderParams.h"
#include "Fish.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"


class Pufferfish : Fish {

public:
    virtual void startRiding(Actor &);
    ~Pufferfish();
    virtual void normalTick();
    virtual void playerTouch(Player &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    Pufferfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
