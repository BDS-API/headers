#pragma once

#include "../bedrock/block/actor/MobSpawnerBlockActor"


class DefaultMobSpawner : BaseMobSpawner {

public:
    virtual DefaultMobSpawner::~DefaultMobSpawner()
    virtual void getPos();

    DefaultMobSpawner(MobSpawnerBlockActor *);
};
