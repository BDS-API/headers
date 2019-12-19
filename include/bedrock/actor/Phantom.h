#pragma once

class Phantom : Monster {

public:
    virtual Phantom::~Phantom();
    virtual void normalTick(void);
    virtual void shouldRender(void)const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void checkSpawnRules(bool);

    Phantom(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
