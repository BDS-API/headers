#pragma once

#include "../bedrock/description/component/SpawnActorDescription.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/nbt/CompoundTag.h"


class SpawnActorComponent {

public:
    SpawnActorComponent();
    void getSpawnEntries();
    SpawnActorComponent(SpawnActorComponent &&);
    void initFromDefinition(Actor &, SpawnActorDescription const&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    ~SpawnActorComponent();
    void initFromDefinition(Actor &);
};
