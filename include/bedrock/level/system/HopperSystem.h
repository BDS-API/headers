#pragma once

#include "../../../unmapped/EntityRegistry"


class HopperSystem : ITickingSystem {

public:
    HopperSystem::~HopperSystem()
    virtual void tick(EntityRegistry &);

    HopperSystem(void);
};
