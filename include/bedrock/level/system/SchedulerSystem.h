#pragma once

#include "../../../unmapped/EntityRegistry"


class SchedulerSystem : ITickingSystem {

public:
    virtual SchedulerSystem::~SchedulerSystem()
    virtual void tick(EntityRegistry &);

    SchedulerSystem(void);
};
