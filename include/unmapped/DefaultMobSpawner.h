#pragma once

class DefaultMobSpawner : BaseMobSpawner {

public:
    virtual DefaultMobSpawner::~DefaultMobSpawner();
    virtual void getPos(void);

    DefaultMobSpawner(MobSpawnerBlockActor *);
};
