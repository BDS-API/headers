#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class SpawnActorSystem : ITickingSystem {

public:
    virtual ~SpawnActorSystem();
    virtual void tick(EntityRegistry &);

    SpawnActorSystem();
};
