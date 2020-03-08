#pragma once

#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class Phantom : Monster {

public:
    virtual Phantom::~Phantom()
    virtual void normalTick();
    virtual void shouldRender()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void checkSpawnRules(bool);

    Phantom(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
