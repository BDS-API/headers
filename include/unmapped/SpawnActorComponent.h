#pragma once

#include "../bedrock/description/component/SpawnActorDescription.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "./SpawnActorComponent.h"


class SpawnActorComponent {

public:

    ~SpawnActorComponent();
    SpawnActorComponent(SpawnActorComponent &&);
    SpawnActorComponent();
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, SpawnActorDescription const&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getSpawnEntries();
};
