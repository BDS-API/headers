#pragma once

#include <memory>
#include "./SpawnData.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class BaseMobSpawner {

public:
    virtual ~BaseMobSpawner();
    virtual void tick(BlockSource &);
    virtual void load(CompoundTag const&);
    virtual void save(CompoundTag &);

    BaseMobSpawner(ActorDefinitionIdentifier);
    void setEntityId(ActorDefinitionIdentifier);
    void getSpawnTypeId()const;
    void getNextSpawnData()const;
    void setNextSpawnData(std::unique_ptr<SpawnData, std::default_delete<SpawnData>>);
    bool isNearPlayer(BlockSource &);
    void _delay(BlockSource &);
    void getDisplayEntity(BlockSource &);
    void getSpin()const;
    void getOSpin()const;
};
