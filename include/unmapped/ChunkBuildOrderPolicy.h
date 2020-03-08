#pragma once

#include "../bedrock/util/ChunkPos"


class ChunkBuildOrderPolicy : ChunkBuildOrderPolicyBase {

public:
    ChunkBuildOrderPolicy::~ChunkBuildOrderPolicy()
    virtual void getChunkRebuildPriority(ChunkPos const&)const;
    virtual void registerForPositionUpdates();
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);

    ChunkBuildOrderPolicy(void);
};
