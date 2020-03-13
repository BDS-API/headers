#pragma once

#include "Animal.h"


class Sheep : Animal {

public:
    static long EAT_ANIMATION_TICKS;

    ~Sheep(); // _ZN5SheepD2Ev
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN5Sheep17handleEntityEventE10ActorEventi
    virtual void getLootTable(); // _ZN5Sheep12getLootTableEv
    virtual void getDefaultLootTable(); // _ZN5Sheep19getDefaultLootTableEv
    virtual void aiStep(); // _ZN5Sheep6aiStepEv
    virtual void ate(); // _ZN5Sheep3ateEv
    virtual void useNewAi()const; // _ZNK5Sheep8useNewAiEv
    virtual void jumpFromGround(); // _ZN5Sheep14jumpFromGroundEv
    virtual void newServerAiStep(); // _ZN5Sheep15newServerAiStepEv
    Sheep(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5SheepC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    bool isGrazing()const; // _ZNK5Sheep9isGrazingEv
    void _getOffspringColor(Animal &, Animal &); // _ZN5Sheep18_getOffspringColorER6AnimalS1_
};
