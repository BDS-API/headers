#pragma once

#include "BaseMobSpawner.h"


class DefaultMobSpawner : BaseMobSpawner {

public:
    virtual void getPos();
    ~DefaultMobSpawner();
    DefaultMobSpawner(MobSpawnerBlockActor *);
};
