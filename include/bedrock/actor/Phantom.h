#pragma once

#include "Monster.h"


class Phantom : Monster {

public:
    ~Phantom(); // _ZN7PhantomD2Ev
    virtual void normalTick(); // _ZN7Phantom10normalTickEv
    virtual void shouldRender()const; // _ZNK7Phantom12shouldRenderEv
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN7Phantom35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void checkSpawnRules(bool); // _ZN7Phantom15checkSpawnRulesEb
    Phantom(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN7PhantomC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
