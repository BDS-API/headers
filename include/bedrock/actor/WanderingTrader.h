#pragma once

#include "Mob.h"
#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class WanderingTrader : Mob {

public:
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getEntityTypeId()const;
    ~WanderingTrader();
    virtual void interactPreventDefault();
    WanderingTrader(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
