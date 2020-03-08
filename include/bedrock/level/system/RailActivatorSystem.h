#pragma once

#include "../../../unmapped/EntityRegistry"


class RailActivatorSystem : ITickingSystem {

public:
    virtual RailActivatorSystem::~RailActivatorSystem()
    virtual void tick(EntityRegistry &);

    RailActivatorSystem(void);
};
