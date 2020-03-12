#pragma once

#include "ITickingSystem.h"


class EnvironmentSensorSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~EnvironmentSensorSystem();
    EnvironmentSensorSystem();
};
