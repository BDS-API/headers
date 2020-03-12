#pragma once

#include "../bedrock/util/ChunkPos.h"


class ChunkBuildOrderPolicyBase {

public:
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void registerForPositionUpdates();
    virtual void unregisterForPositionUpdates(unsigned int);
    ~ChunkBuildOrderPolicyBase();
    ChunkBuildOrderPolicyBase();
};
