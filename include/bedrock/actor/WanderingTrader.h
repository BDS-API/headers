#pragma once

#include "Mob.h"


class WanderingTrader : public Mob {

public:
    virtual ~WanderingTrader(); // _ZN15WanderingTraderD2Ev
    virtual void __fake_function0(); // fake
    virtual void interactPreventDefault(); // _ZN15WanderingTrader22interactPreventDefaultEv
    virtual void getEntityTypeId()const; // _ZNK15WanderingTrader15getEntityTypeIdEv
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN15WanderingTrader35updateEntitySpecificMolangVariablesER12RenderParams
    WanderingTrader(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN15WanderingTraderC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
