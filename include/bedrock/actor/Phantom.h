#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Monster.h"


class Phantom : Monster {

public:
    virtual void shouldRender()const;
    ~Phantom();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void checkSpawnRules(bool);
    virtual void normalTick();
    Phantom(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
