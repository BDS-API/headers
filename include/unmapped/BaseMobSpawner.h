#pragma once

#include <memory>
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class BaseMobSpawner {

public:
    virtual void load(CompoundTag const&);
    virtual void save(CompoundTag &);
    virtual void tick(BlockSource &);
    ~BaseMobSpawner();
    BaseMobSpawner(ActorDefinitionIdentifier);
    void setEntityId(ActorDefinitionIdentifier);
    void getNextSpawnData()const;
    bool isNearPlayer(BlockSource &);
    void setNextSpawnData(std::unique_ptr<SpawnData>);
    void _delay(BlockSource &);
    void getOSpin()const;
    void getDisplayEntity(BlockSource &);
    void getSpawnTypeId()const;
    void getSpin()const;
};
