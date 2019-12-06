#pragma once

class EnvironmentSensorSystem : ITickingSystem {

public:
    virtual ~EnvironmentSensorSystem();
    virtual void tick(EntityRegistry &);

    void EnvironmentSensorSystem(void);
};
