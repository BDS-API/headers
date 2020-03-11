#pragma once

#include "./MobSpawnerPermutation.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class MobSpawnerPermutation {

public:

    ~MobSpawnerPermutation();
    MobSpawnerPermutation(MobSpawnerPermutation const&);
    void getIdentifier()const;
    MobSpawnerPermutation(int, ActorDefinitionIdentifier const&);
};
