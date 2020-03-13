#pragma once

#include "ITickingSystem.h"


class EnvironmentSensorSystem : ITickingSystem {

public:
    ~EnvironmentSensorSystem(); // _ZN23EnvironmentSensorSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN23EnvironmentSensorSystem4tickER14EntityRegistry
    EnvironmentSensorSystem(); // _ZN23EnvironmentSensorSystemC2Ev
};
