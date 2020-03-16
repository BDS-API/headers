#pragma once

#include "ITickingSystem.h"


class TimerSystem : public ITickingSystem {

public:
    virtual ~TimerSystem(); // _ZN11TimerSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN11TimerSystem4tickER14EntityRegistry
    TimerSystem(); // _ZN11TimerSystemC2Ev
//    void _tickComponent(EntityContext &, long &, ActorComponent &, TimerComponent &); //TODO: incomplete function definition // _ZN11TimerSystem14_tickComponentER13EntityContextR13FlagComponentI15ActorTickedFlagER14ActorComponentR14TimerComponent
};
