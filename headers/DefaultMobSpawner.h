#pragma once

class DefaultMobSpawner : BaseMobSpawner {

public:
    virtual ~DefaultMobSpawner();
    virtual void getPos(void);

    void DefaultMobSpawner(MobSpawnerBlockActor *);
};
