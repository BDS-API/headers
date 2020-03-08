#pragma once

#include "unmapped/ActorDefinitionIdentifier"
#include "unmapped/ActorDefinitionGroup"


class Salmon : Fish {

public:
    virtual Salmon::~Salmon()
    virtual void playerTouch(Player &);
    virtual void createAIGoals();

    Salmon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
