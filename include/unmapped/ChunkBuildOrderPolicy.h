#pragma once



class ChunkBuildOrderPolicy : ChunkBuildOrderPolicyBase {

public:
    virtual ChunkBuildOrderPolicy::~ChunkBuildOrderPolicy();
    virtual void getChunkRebuildPriority(ChunkPos const&)const;
    virtual void registerForPositionUpdates(void);
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);

    ChunkBuildOrderPolicy(void);
};
