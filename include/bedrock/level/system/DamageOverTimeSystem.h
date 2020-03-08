#pragma once

#include "../../../unmapped/EntityRegistry"


class DamageOverTimeSystem : ITickingSystem {

public:
    DamageOverTimeSystem::~DamageOverTimeSystem()
    virtual void tick(EntityRegistry &);

    DamageOverTimeSystem(void);
};
