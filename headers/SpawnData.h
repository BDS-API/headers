#pragma once

class SpawnData {

public:
    virtual ~SpawnData();

    void SpawnData(void);
    void SpawnData(CompoundTag const&);
    void SpawnData(int, ActorDefinitionIdentifier);
    void SpawnData(SpawnData const&);
    void save(void);
};
