#pragma once

class EnvironmentSensorSystem : ITickingSystem {

public:
    virtual EnvironmentSensorSystem::~EnvironmentSensorSystem();
    virtual void tick(EntityRegistry &);

    EnvironmentSensorSystem(void);
};
