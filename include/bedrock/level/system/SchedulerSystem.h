#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class SchedulerSystem : ITickingSystem {

public:
    ~SchedulerSystem();
    virtual void tick(EntityRegistry &);
    SchedulerSystem();
};
