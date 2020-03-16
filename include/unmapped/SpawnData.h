#pragma once

#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class SpawnData {

public:
    virtual ~SpawnData(); // _ZN9SpawnDataD2Ev
    virtual void __fake_function0(); // fake
    SpawnData(); // _ZN9SpawnDataC2Ev
    SpawnData(CompoundTag const&); // _ZN9SpawnDataC2ERK11CompoundTag
    SpawnData(int, ActorDefinitionIdentifier); // _ZN9SpawnDataC2Ei25ActorDefinitionIdentifier
    SpawnData(SpawnData const&); // _ZN9SpawnDataC2ERKS_
    void save(); // _ZN9SpawnData4saveEv
};
