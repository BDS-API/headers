#pragma once

class MobEffectSystem : ITickingSystem {

public:
    virtual ~MobEffectSystem();
    virtual void tick(EntityRegistry &);

    void MobEffectSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, MobEffectComponent &);
};
