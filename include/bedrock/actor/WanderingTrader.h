#pragma once

#include "Mob.h"


class WanderingTrader : Mob {

public:
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getEntityTypeId()const;
    virtual void interactPreventDefault();
    ~WanderingTrader();
    WanderingTrader(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
