#pragma once

#include "../bedrock/util/ChunkPos.h"


class ChunkBuildOrderPolicyBase {

public:
    virtual ~ChunkBuildOrderPolicyBase();
    virtual void registerForPositionUpdates();
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);

    ChunkBuildOrderPolicyBase();
};
