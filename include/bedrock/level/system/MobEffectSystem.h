#pragma once

class MobEffectSystem : ITickingSystem {

public:
    virtual MobEffectSystem::~MobEffectSystem();
    virtual void tick(EntityRegistry &);

    MobEffectSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, MobEffectComponent &);
};
