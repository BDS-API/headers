#pragma once

#include "../../../unmapped/EntityRegistry"


class DespawnSystem : ITickingSystem {

public:
    virtual DespawnSystem::~DespawnSystem()
    virtual void tick(EntityRegistry &);

    DespawnSystem(void);
};
