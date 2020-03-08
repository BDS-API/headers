#pragma once

#include "../../../unmapped/EntityRegistry"


class SpawnActorSystem : ITickingSystem {

public:
    SpawnActorSystem::~SpawnActorSystem()
    virtual void tick(EntityRegistry &);

    SpawnActorSystem(void);
};
