#pragma once

#include "ITickingSystem.h"


class MobEffectSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~MobEffectSystem();
    MobEffectSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, MobEffectComponent &); //TODO: incomplete function definition
};
