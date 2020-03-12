#pragma once

#include "../../actor/unmapped/ActorComponent.h"
#include "ITickingSystem.h"
#include "../../../unmapped/EntityContext.h"
#include "../../../unmapped/TimerComponent.h"
#include "../../../unmapped/EntityRegistry.h"


class TimerSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~TimerSystem();
    TimerSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TimerComponent &); //TODO: incomplete function definition
};
