#pragma once

#include "../../../unmapped/EntityRegistry"


class FlockingSystem : ITickingSystem {

public:
    virtual FlockingSystem::~FlockingSystem()
    virtual void tick(EntityRegistry &);

    FlockingSystem(void);
};
