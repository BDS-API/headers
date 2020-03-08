#pragma once

#include "../bedrock/block/actor/MobSpawnerBlockActor"


class DefaultMobSpawner : BaseMobSpawner {

public:
    DefaultMobSpawner::~DefaultMobSpawner()
    virtual void getPos();

    DefaultMobSpawner(MobSpawnerBlockActor *);
};
