#pragma once



class ChunkBuildOrderPolicyBase {

public:
    virtual void registerForPositionUpdates();
    virtual void unregisterForPositionUpdates(unsigned int);
    ~ChunkBuildOrderPolicyBase();
    virtual void updatePosition(unsigned int, ChunkPos &);
    ChunkBuildOrderPolicyBase();
};
