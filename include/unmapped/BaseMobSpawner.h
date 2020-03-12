#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "SpawnData.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include <memory>
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class BaseMobSpawner {

public:
    virtual void tick(BlockSource &);
    virtual void save(CompoundTag &);
    ~BaseMobSpawner();
    virtual void load(CompoundTag const&);
    void setNextSpawnData(std::unique_ptr<SpawnData>);
    void _delay(BlockSource &);
    void getSpin()const;
    void setEntityId(ActorDefinitionIdentifier);
    bool isNearPlayer(BlockSource &);
    void getOSpin()const;
    void getNextSpawnData()const;
    void getDisplayEntity(BlockSource &);
    void getSpawnTypeId()const;
    BaseMobSpawner(ActorDefinitionIdentifier);
};
