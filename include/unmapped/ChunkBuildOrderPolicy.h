#pragma once

#include "ChunkBuildOrderPolicyBase.h"


class ChunkBuildOrderPolicy : ChunkBuildOrderPolicyBase {

public:
    virtual void unregisterForPositionUpdates(unsigned int);
    ~ChunkBuildOrderPolicy();
    virtual void registerForPositionUpdates();
    virtual void getChunkRebuildPriority(ChunkPos const&)const;
    virtual void updatePosition(unsigned int, ChunkPos &);
    ChunkBuildOrderPolicy();
};
