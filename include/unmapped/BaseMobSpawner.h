#pragma once

class BaseMobSpawner {

public:
    virtual BaseMobSpawner::~BaseMobSpawner();
    virtual void tick(BlockSource &);
    virtual void load(CompoundTag const&);
    virtual void save(CompoundTag &);

    BaseMobSpawner(ActorDefinitionIdentifier);
    void setEntityId(ActorDefinitionIdentifier);
    void getSpawnTypeId(void)const;
    void getNextSpawnData(void)const;
    void setNextSpawnData(std::unique_ptr<SpawnData, std::default_delete<SpawnData>>);
    bool isNearPlayer(BlockSource &);
    void _delay(BlockSource &);
    void getDisplayEntity(BlockSource &);
    void getSpin(void)const;
    void getOSpin(void)const;
};
