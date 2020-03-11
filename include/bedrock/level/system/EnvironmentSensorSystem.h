#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class EnvironmentSensorSystem : ITickingSystem {

public:
    virtual ~EnvironmentSensorSystem();
    virtual void tick(EntityRegistry &);

    EnvironmentSensorSystem();
};
