#pragma once

class ChunkBuildOrderPolicy : ChunkBuildOrderPolicyBase {

public:
    virtual ~ChunkBuildOrderPolicy();
    virtual void getChunkRebuildPriority(ChunkPos const&)const;
    virtual void registerForPositionUpdates(void);
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);

    void ChunkBuildOrderPolicy(void);
};
