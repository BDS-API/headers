#pragma once

#include "./SpawnActorParameters.h"


class SpawnActorParameters {

public:

    SpawnActorParameters(SpawnActorParameters const&);
    ~SpawnActorParameters();
    SpawnActorParameters();
    SpawnActorParameters(SpawnActorParameters &&);
};
