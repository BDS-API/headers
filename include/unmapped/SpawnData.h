#pragma once

#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include "./SpawnData.h"
#include "../bedrock/nbt/CompoundTag.h"


class SpawnData {

public:
    virtual ~SpawnData();

    SpawnData();
    SpawnData(CompoundTag const&);
    SpawnData(int, ActorDefinitionIdentifier);
    SpawnData(SpawnData const&);
    void save();
};
