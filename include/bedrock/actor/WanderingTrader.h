#pragma once

#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionGroup"


class WanderingTrader : Mob {

public:
    WanderingTrader::~WanderingTrader()
    virtual void interactPreventDefault();
    virtual void getEntityTypeId()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);

    WanderingTrader(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
