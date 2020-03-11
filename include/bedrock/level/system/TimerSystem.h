#pragma once

#include "./ITickingSystem.h"
#include "../../actor/unmapped/ActorComponent.h"
#include "../../../unmapped/TimerComponent.h"
#include "../../../unmapped/EntityRegistry.h"
#include "../../../unmapped/EntityContext.h"


class TimerSystem : ITickingSystem {

public:
    virtual ~TimerSystem();
    virtual void tick(EntityRegistry &);

    TimerSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TimerComponent &); //TODO: incomplete function definition
};
