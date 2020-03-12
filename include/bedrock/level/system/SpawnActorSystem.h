#pragma once

#include "ITickingSystem.h"


class SpawnActorSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~SpawnActorSystem();
    SpawnActorSystem();
};
