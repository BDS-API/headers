#pragma once

#include "../../../unmapped/EntityRegistry"


class DespawnSystem : ITickingSystem {

public:
    DespawnSystem::~DespawnSystem()
    virtual void tick(EntityRegistry &);

    DespawnSystem(void);
};
