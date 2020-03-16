#pragma once

#include "ITickingSystem.h"


class SpawnActorSystem : public ITickingSystem {

public:
    virtual ~SpawnActorSystem(); // _ZN16SpawnActorSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN16SpawnActorSystem4tickER14EntityRegistry
    SpawnActorSystem(); // _ZN16SpawnActorSystemC2Ev
};
