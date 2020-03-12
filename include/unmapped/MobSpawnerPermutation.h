#pragma once



class MobSpawnerPermutation {

public:
    MobSpawnerPermutation(int, ActorDefinitionIdentifier const&);
    MobSpawnerPermutation(MobSpawnerPermutation const&);
    void getIdentifier()const;
    ~MobSpawnerPermutation();
};
