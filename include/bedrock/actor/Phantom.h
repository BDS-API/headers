#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionIdentifier"


class Phantom : Monster {

public:
    Phantom::~Phantom()
    virtual void normalTick();
    virtual void shouldRender()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void checkSpawnRules(bool);

    Phantom(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
