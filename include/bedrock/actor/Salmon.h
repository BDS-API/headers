#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Player.h"
#include "./Fish.h"


class Salmon : Fish {

public:
    virtual ~Salmon();
    virtual void playerTouch(Player &);
    virtual void createAIGoals();

    Salmon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
