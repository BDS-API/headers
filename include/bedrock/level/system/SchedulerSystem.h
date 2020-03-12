#pragma once

#include "ITickingSystem.h"


class SchedulerSystem : ITickingSystem {

public:
    ~SchedulerSystem();
    virtual void tick(EntityRegistry &);
    SchedulerSystem();
};
