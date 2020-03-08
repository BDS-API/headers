#pragma once

#include "../../../unmapped/EntityRegistry"


class BlockBreakSensorSystem : ITickingSystem {

public:
    virtual BlockBreakSensorSystem::~BlockBreakSensorSystem()
    virtual void tick(EntityRegistry &);

    BlockBreakSensorSystem(void);
};
