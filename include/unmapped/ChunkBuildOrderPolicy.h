#pragma once

#include "../bedrock/util/ChunkPos.h"
#include "ChunkBuildOrderPolicyBase.h"


class ChunkBuildOrderPolicy : ChunkBuildOrderPolicyBase {

public:
    ~ChunkBuildOrderPolicy();
    virtual void getChunkRebuildPriority(ChunkPos const&)const;
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);
    virtual void registerForPositionUpdates();
    ChunkBuildOrderPolicy();
};
