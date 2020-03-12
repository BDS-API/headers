#pragma once

#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include "../bedrock/nbt/CompoundTag.h"


class SpawnData {

public:
    ~SpawnData();
    SpawnData(SpawnData const&);
    SpawnData();
    SpawnData(CompoundTag const&);
    SpawnData(int, ActorDefinitionIdentifier);
    void save();
};
