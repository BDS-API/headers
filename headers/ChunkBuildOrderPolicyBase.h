#pragma once

class ChunkBuildOrderPolicyBase {

    virtual ~ChunkBuildOrderPolicyBase();
    virtual ~ChunkBuildOrderPolicyBase();
    virtual void getChunkRebuildPriority(ChunkPos const&)const;
    virtual void registerForPositionUpdates(void);
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);
}
