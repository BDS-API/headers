#pragma once

class Pufferfish : Fish {

public:
    virtual ~Pufferfish();
    virtual void normalTick(void);
    virtual void startRiding(Actor &);
    virtual void playerTouch(Player &);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated(void);

    void Pufferfish(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
