#pragma once

#include "../bedrock/block/actor/MobSpawnerBlockActor.h"
#include "BaseMobSpawner.h"


class DefaultMobSpawner : BaseMobSpawner {

public:
    virtual void getPos();
    ~DefaultMobSpawner();
    DefaultMobSpawner(MobSpawnerBlockActor *);
};
