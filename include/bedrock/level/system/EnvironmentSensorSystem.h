#pragma once

#include "../../../unmapped/EntityRegistry"


class EnvironmentSensorSystem : ITickingSystem {

public:
    EnvironmentSensorSystem::~EnvironmentSensorSystem()
    virtual void tick(EntityRegistry &);

    EnvironmentSensorSystem(void);
};
