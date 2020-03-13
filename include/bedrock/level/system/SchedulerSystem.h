#pragma once

#include "ITickingSystem.h"


class SchedulerSystem : ITickingSystem {

public:
    ~SchedulerSystem(); // _ZN15SchedulerSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN15SchedulerSystem4tickER14EntityRegistry
    SchedulerSystem(); // _ZN15SchedulerSystemC2Ev
};
