#pragma once

#include "./ChunkBuildOrderPolicyBase.h"
#include "../bedrock/util/ChunkPos.h"


class ChunkBuildOrderPolicy : ChunkBuildOrderPolicyBase {

public:
    virtual ~ChunkBuildOrderPolicy();
    virtual void getChunkRebuildPriority(ChunkPos const&)const;
    virtual void registerForPositionUpdates();
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);

    ChunkBuildOrderPolicy();
};
