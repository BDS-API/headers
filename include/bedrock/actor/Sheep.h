#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"


class Sheep : Animal {

public:
    static long EAT_ANIMATION_TICKS;

    virtual ~Sheep();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void getLootTable();
    virtual void getDefaultLootTable();
    virtual void aiStep();
    virtual void ate();
    virtual void useNewAi()const;
    virtual void jumpFromGround();
    virtual void newServerAiStep();

    Sheep(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isGrazing()const;
    void _getOffspringColor(Animal &, Animal &);
};
