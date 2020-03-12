#pragma once

#include "Player.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Fish.h"


class Salmon : Fish {

public:
    ~Salmon();
    virtual void playerTouch(Player &);
    virtual void createAIGoals();
    Salmon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
