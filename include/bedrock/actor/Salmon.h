#pragma once

#include "Fish.h"


class Salmon : Fish {

public:
    ~Salmon(); // _ZN6SalmonD2Ev
    virtual void playerTouch(Player &); // _ZN6Salmon11playerTouchER6Player
    virtual void createAIGoals(); // _ZN6Salmon13createAIGoalsEv
    Salmon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN6SalmonC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
