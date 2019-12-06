#pragma once

class Phantom : Monster {

public:
    virtual ~Phantom();
    virtual void normalTick(void);
    virtual void shouldRender(void)const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void checkSpawnRules(bool);

    void Phantom(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
