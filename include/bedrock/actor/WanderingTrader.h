#pragma once

#include "Mob.h"


class WanderingTrader : Mob {

public:
    ~WanderingTrader(); // _ZN15WanderingTraderD2Ev
    virtual void interactPreventDefault(); // _ZN15WanderingTrader22interactPreventDefaultEv
    virtual void getEntityTypeId()const; // _ZNK15WanderingTrader15getEntityTypeIdEv
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN15WanderingTrader35updateEntitySpecificMolangVariablesER12RenderParams
    WanderingTrader(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN15WanderingTraderC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
