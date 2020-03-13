#pragma once

#include "ITickingSystem.h"


class MobEffectSystem : ITickingSystem {

public:
    ~MobEffectSystem(); // _ZN15MobEffectSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN15MobEffectSystem4tickER14EntityRegistry
    MobEffectSystem(); // _ZN15MobEffectSystemC2Ev
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, MobEffectComponent &); //TODO: incomplete function definition // _ZN15MobEffectSystem14_tickComponentER13EntityContextR13FlagComponentI15ActorTickedFlagER14ActorComponentR18MobEffectComponent
};
