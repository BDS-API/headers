#pragma once

#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorDefinitionGroup.h"


class Sheep : Animal {

public:
    static long EAT_ANIMATION_TICKS;

//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void getLootTable();
    virtual void aiStep();
    virtual void useNewAi()const;
    ~Sheep();
    virtual void ate();
    virtual void getDefaultLootTable();
    virtual void newServerAiStep();
    virtual void jumpFromGround();
    bool isGrazing()const;
    void _getOffspringColor(Animal &, Animal &);
    Sheep(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
