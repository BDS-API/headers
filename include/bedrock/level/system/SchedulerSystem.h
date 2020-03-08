#pragma once

#include "../../../unmapped/EntityRegistry"


class SchedulerSystem : ITickingSystem {

public:
    SchedulerSystem::~SchedulerSystem()
    virtual void tick(EntityRegistry &);

    SchedulerSystem(void);
};
