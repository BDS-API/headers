#pragma once

#include "Fish.h"


class Salmon : Fish {

public:
    virtual void playerTouch(Player &);
    ~Salmon();
    virtual void createAIGoals();
    Salmon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
