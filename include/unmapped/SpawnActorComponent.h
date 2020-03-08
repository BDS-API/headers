#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/description/component/SpawnActorDescription"


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
