#pragma once

class SchedulerSystem : ITickingSystem {

public:
    virtual SchedulerSystem::~SchedulerSystem();
    virtual void tick(EntityRegistry &);

    SchedulerSystem(void);
};
