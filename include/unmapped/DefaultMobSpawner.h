#pragma once

#include "BaseMobSpawner.h"


class DefaultMobSpawner : BaseMobSpawner {

public:
    ~DefaultMobSpawner(); // _ZN17DefaultMobSpawnerD2Ev
    virtual void getPos(); // _ZN17DefaultMobSpawner6getPosEv
    DefaultMobSpawner(MobSpawnerBlockActor *); // _ZN17DefaultMobSpawnerC2EP20MobSpawnerBlockActor
};
