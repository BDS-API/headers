#pragma once

#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionIdentifier"
#include "unmapped/ActorDefinitionGroup"


class WanderingTrader : Mob {

public:
    virtual WanderingTrader::~WanderingTrader()
    virtual void interactPreventDefault();
    virtual void getEntityTypeId()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);

    WanderingTrader(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
