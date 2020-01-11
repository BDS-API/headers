#pragma once

class SpawnData {

public:
    virtual SpawnData::~SpawnData();

    SpawnData(void);
    SpawnData(CompoundTag const&);
    SpawnData(int, ActorDefinitionIdentifier);
    SpawnData(SpawnData const&);
    void save(void);
};