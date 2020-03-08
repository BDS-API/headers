#pragma once

#include "../../../unmapped/EntityRegistry"


class RailActivatorSystem : ITickingSystem {

public:
    RailActivatorSystem::~RailActivatorSystem()
    virtual void tick(EntityRegistry &);

    RailActivatorSystem(void);
};
