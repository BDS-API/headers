#pragma once



class SpawnActorComponent {

public:
    SpawnActorComponent();
    ~SpawnActorComponent();
    void initFromDefinition(Actor &, SpawnActorDescription const&);
    void getSpawnEntries();
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void initFromDefinition(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    SpawnActorComponent(SpawnActorComponent &&);
};
