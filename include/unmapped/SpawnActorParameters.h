#pragma once



class SpawnActorParameters {

public:
    ~SpawnActorParameters();
    SpawnActorParameters(SpawnActorParameters &&);
    SpawnActorParameters(SpawnActorParameters const&);
    SpawnActorParameters();
};
