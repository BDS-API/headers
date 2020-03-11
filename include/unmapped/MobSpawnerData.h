#pragma once

#include "./MobSpawnerData.h"
#include "./MobSpawnRules.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class MobSpawnerData {

public:

    ~MobSpawnerData();
    MobSpawnerData(ActorDefinitionIdentifier const&, int, MobSpawnRules &);
    MobSpawnerData(MobSpawnerData const&);
};
