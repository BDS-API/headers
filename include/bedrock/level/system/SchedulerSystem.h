#pragma once

#include "ITickingSystem.h"


class SchedulerSystem : public ITickingSystem {

public:
    virtual ~SchedulerSystem(); // _ZN15SchedulerSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN15SchedulerSystem4tickER14EntityRegistry
    SchedulerSystem(); // _ZN15SchedulerSystemC2Ev
};
