#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Mob.h"


class WanderingTrader : Mob {

public:
    virtual ~WanderingTrader();
    virtual void interactPreventDefault();
    virtual void getEntityTypeId()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);

    WanderingTrader(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
