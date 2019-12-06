#pragma once

class SchedulerSystem : ITickingSystem {

public:
    virtual ~SchedulerSystem();
    virtual void tick(EntityRegistry &);

    void SchedulerSystem(void);
};
