#pragma once



class SpawnActorComponent {

public:
    ~SpawnActorComponent(); // _ZN19SpawnActorComponentD2Ev
    SpawnActorComponent(SpawnActorComponent &&); // _ZN19SpawnActorComponentC2EOS_
    SpawnActorComponent(); // _ZN19SpawnActorComponentC2Ev
    void initFromDefinition(Actor &); // _ZN19SpawnActorComponent18initFromDefinitionER5Actor
    void initFromDefinition(Actor &, SpawnActorDescription const&); // _ZN19SpawnActorComponent18initFromDefinitionER5ActorRK21SpawnActorDescription
    void addAdditionalSaveData(CompoundTag &); // _ZN19SpawnActorComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN19SpawnActorComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void getSpawnEntries(); // _ZN19SpawnActorComponent15getSpawnEntriesEv
};
