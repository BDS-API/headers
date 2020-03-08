#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/description/component/SpawnActorDescription"
#include "../bedrock/nbt/CompoundTag"


class SpawnActorComponent {

public:

    SpawnActorComponent(SpawnActorComponent&&);
    SpawnActorComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, SpawnActorDescription const&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getSpawnEntries();
};
