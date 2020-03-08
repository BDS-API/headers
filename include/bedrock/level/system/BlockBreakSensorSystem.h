#pragma once

#include "../../../unmapped/EntityRegistry"


class BlockBreakSensorSystem : ITickingSystem {

public:
    BlockBreakSensorSystem::~BlockBreakSensorSystem()
    virtual void tick(EntityRegistry &);

    BlockBreakSensorSystem(void);
};
