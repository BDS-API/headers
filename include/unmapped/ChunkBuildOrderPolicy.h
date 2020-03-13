#pragma once

#include "ChunkBuildOrderPolicyBase.h"


class ChunkBuildOrderPolicy : ChunkBuildOrderPolicyBase {

public:
    ~ChunkBuildOrderPolicy(); // _ZN21ChunkBuildOrderPolicyD2Ev
    virtual void getChunkRebuildPriority(ChunkPos const&)const; // _ZNK21ChunkBuildOrderPolicy23getChunkRebuildPriorityERK8ChunkPos
    virtual void registerForPositionUpdates(); // _ZN21ChunkBuildOrderPolicy26registerForPositionUpdatesEv
    virtual void updatePosition(unsigned int, ChunkPos &); // _ZN21ChunkBuildOrderPolicy14updatePositionEjR8ChunkPos
    virtual void unregisterForPositionUpdates(unsigned int); // _ZN21ChunkBuildOrderPolicy28unregisterForPositionUpdatesEj
    ChunkBuildOrderPolicy(); // _ZN21ChunkBuildOrderPolicyC2Ev
};
