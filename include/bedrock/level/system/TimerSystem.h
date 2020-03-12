#pragma once

#include "ITickingSystem.h"


class TimerSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~TimerSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TimerComponent &); //TODO: incomplete function definition
    TimerSystem();
};
