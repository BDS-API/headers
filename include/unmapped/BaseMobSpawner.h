#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier"


class BaseMobSpawner {

public:
    virtual BaseMobSpawner::~BaseMobSpawner()
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
