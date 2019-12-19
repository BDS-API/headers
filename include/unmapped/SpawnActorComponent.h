#pragma once

class SpawnActorComponent {

public:

    SpawnActorComponent(SpawnActorComponent&&);
    SpawnActorComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, SpawnActorDescription const&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getSpawnEntries(void);
};
