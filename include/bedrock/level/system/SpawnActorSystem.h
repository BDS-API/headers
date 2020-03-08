#pragma once

#include "../../../unmapped/EntityRegistry"


class SpawnActorSystem : ITickingSystem {

public:
    virtual SpawnActorSystem::~SpawnActorSystem()
    virtual void tick(EntityRegistry &);

    SpawnActorSystem(void);
};
