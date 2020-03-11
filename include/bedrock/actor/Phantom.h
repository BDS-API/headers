#pragma once

#include "./Monster.h"
#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class Phantom : Monster {

public:
    virtual ~Phantom();
    virtual void normalTick();
    virtual void shouldRender()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void checkSpawnRules(bool);

    Phantom(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
