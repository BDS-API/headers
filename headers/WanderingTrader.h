#pragma once

class WanderingTrader : Mob {

public:
    virtual ~WanderingTrader();
    virtual void interactPreventDefault(void);
    virtual void getEntityTypeId(void)const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);

    void WanderingTrader(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
