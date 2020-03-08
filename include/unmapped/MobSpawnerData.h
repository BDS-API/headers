#pragma once

#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier"


class MobSpawnerData {

public:

    MobSpawnerData(ActorDefinitionIdentifier const&, int, MobSpawnRules &);
    MobSpawnerData(MobSpawnerData const&);
};
