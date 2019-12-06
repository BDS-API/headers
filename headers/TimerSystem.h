#pragma once

class TimerSystem : ITickingSystem {

public:
    virtual ~TimerSystem();
    virtual void tick(EntityRegistry &);

    void TimerSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TimerComponent &);
};
