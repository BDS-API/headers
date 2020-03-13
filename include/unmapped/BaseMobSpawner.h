#pragma once

#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include <memory>


class BaseMobSpawner {

public:
    ~BaseMobSpawner(); // _ZN14BaseMobSpawnerD2Ev
    virtual void tick(BlockSource &); // _ZN14BaseMobSpawner4tickER11BlockSource
    virtual void load(CompoundTag const&); // _ZN14BaseMobSpawner4loadERK11CompoundTag
    virtual void save(CompoundTag &); // _ZN14BaseMobSpawner4saveER11CompoundTag
    BaseMobSpawner(ActorDefinitionIdentifier); // _ZN14BaseMobSpawnerC2E25ActorDefinitionIdentifier
    void setEntityId(ActorDefinitionIdentifier); // _ZN14BaseMobSpawner11setEntityIdE25ActorDefinitionIdentifier
    void getSpawnTypeId()const; // _ZNK14BaseMobSpawner14getSpawnTypeIdEv
    void getNextSpawnData()const; // _ZNK14BaseMobSpawner16getNextSpawnDataEv
    void setNextSpawnData(std::unique_ptr<SpawnData>); // _ZN14BaseMobSpawner16setNextSpawnDataESt10unique_ptrI9SpawnDataSt14default_deleteIS1_EE
    bool isNearPlayer(BlockSource &); // _ZN14BaseMobSpawner12isNearPlayerER11BlockSource
    void _delay(BlockSource &); // _ZN14BaseMobSpawner6_delayER11BlockSource
    void getDisplayEntity(BlockSource &); // _ZN14BaseMobSpawner16getDisplayEntityER11BlockSource
    void getSpin()const; // _ZNK14BaseMobSpawner7getSpinEv
    void getOSpin()const; // _ZNK14BaseMobSpawner8getOSpinEv
};
