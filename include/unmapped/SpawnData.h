#pragma once

#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class SpawnData {

public:
    ~SpawnData();
    void save();
    SpawnData();
    SpawnData(CompoundTag const&);
    SpawnData(int, ActorDefinitionIdentifier);
    SpawnData(SpawnData const&);
};
