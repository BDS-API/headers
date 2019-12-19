#pragma once

class TimerSystem : ITickingSystem {

public:
    virtual TimerSystem::~TimerSystem();
    virtual void tick(EntityRegistry &);

    TimerSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TimerComponent &);
};
