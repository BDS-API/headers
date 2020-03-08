#pragma once

#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"
#include "../../../unmapped/TimerComponent"
#include "../../actor/unmapped/ActorComponent"


class TimerSystem : ITickingSystem {

public:
    TimerSystem::~TimerSystem()
    virtual void tick(EntityRegistry &);

    TimerSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TimerComponent &);
};
