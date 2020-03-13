#pragma once

#include "ITickingSystem.h"


class SpawnActorSystem : ITickingSystem {

public:
    ~SpawnActorSystem(); // _ZN16SpawnActorSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN16SpawnActorSystem4tickER14EntityRegistry
    SpawnActorSystem(); // _ZN16SpawnActorSystemC2Ev
};
