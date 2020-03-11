#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "damagesource/ActorDamageSource.h"
#include "./Fish.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "./Player.h"


class Pufferfish : Fish {

public:
    virtual ~Pufferfish();
    virtual void normalTick();
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated();

    Pufferfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
