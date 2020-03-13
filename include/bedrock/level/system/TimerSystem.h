#pragma once

#include "ITickingSystem.h"


class TimerSystem : ITickingSystem {

public:
    ~TimerSystem(); // _ZN11TimerSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN11TimerSystem4tickER14EntityRegistry
    TimerSystem(); // _ZN11TimerSystemC2Ev
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TimerComponent &); //TODO: incomplete function definition // _ZN11TimerSystem14_tickComponentER13EntityContextR13FlagComponentI15ActorTickedFlagER14ActorComponentR14TimerComponent
};
