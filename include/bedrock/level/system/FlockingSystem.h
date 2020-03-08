#pragma once

#include "../../../unmapped/EntityRegistry"


class FlockingSystem : ITickingSystem {

public:
    FlockingSystem::~FlockingSystem()
    virtual void tick(EntityRegistry &);

    FlockingSystem(void);
};
