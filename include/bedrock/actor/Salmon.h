#pragma once

#include "../../unmapped/ActorDefinitionGroup"


class Salmon : Fish {

public:
    virtual Salmon::~Salmon();
    virtual void playerTouch(Player &);
    virtual void createAIGoals(void);

    Salmon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
