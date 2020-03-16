#pragma once

#include "ITickingSystem.h"


class EnvironmentSensorSystem : public ITickingSystem {

public:
    virtual ~EnvironmentSensorSystem(); // _ZN23EnvironmentSensorSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN23EnvironmentSensorSystem4tickER14EntityRegistry
    EnvironmentSensorSystem(); // _ZN23EnvironmentSensorSystemC2Ev
};
