#pragma once

#include "../../actor/unmapped/ActorComponent"
#include "../../../unmapped/TimerComponent"
#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"


class TimerSystem : ITickingSystem {

public:
    virtual TimerSystem::~TimerSystem()
    virtual void tick(EntityRegistry &);

    TimerSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TimerComponent &);
};
