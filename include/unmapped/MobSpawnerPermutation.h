#pragma once

#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier"


class MobSpawnerPermutation {

public:

    MobSpawnerPermutation(MobSpawnerPermutation const&);
    void getIdentifier()const;
    MobSpawnerPermutation(int, ActorDefinitionIdentifier const&);
};
