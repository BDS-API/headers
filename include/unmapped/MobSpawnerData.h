#pragma once

#include "MobSpawnRules.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class MobSpawnerData {

public:
    MobSpawnerData(MobSpawnerData const&);
    MobSpawnerData(ActorDefinitionIdentifier const&, int, MobSpawnRules &);
    ~MobSpawnerData();
};
