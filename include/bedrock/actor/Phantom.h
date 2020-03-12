#pragma once

#include "Monster.h"


class Phantom : Monster {

public:
    virtual void normalTick();
    virtual void checkSpawnRules(bool);
    ~Phantom();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void shouldRender()const;
    Phantom(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
