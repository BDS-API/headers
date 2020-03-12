#pragma once

#include "Animal.h"


class Sheep : Animal {

public:
    static long EAT_ANIMATION_TICKS;

    virtual void aiStep();
    virtual void useNewAi()const;
    virtual void jumpFromGround();
    virtual void ate();
    virtual void getDefaultLootTable();
    virtual void getLootTable();
    ~Sheep();
    virtual void newServerAiStep();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    Sheep(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _getOffspringColor(Animal &, Animal &);
    bool isGrazing()const;
};
