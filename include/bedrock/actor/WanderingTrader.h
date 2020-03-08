#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/RenderParams"


class WanderingTrader : Mob {

public:
    virtual WanderingTrader::~WanderingTrader();
    virtual void interactPreventDefault(void);
    virtual void getEntityTypeId(void)const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);

    WanderingTrader(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
