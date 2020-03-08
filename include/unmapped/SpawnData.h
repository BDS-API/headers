#pragma once

#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier"
#include "../bedrock/nbt/CompoundTag"


class SpawnData {

public:
    SpawnData::~SpawnData()

    SpawnData(void);
    SpawnData(CompoundTag const&);
    SpawnData(int, ActorDefinitionIdentifier);
    SpawnData(SpawnData const&);
    void save();
};
