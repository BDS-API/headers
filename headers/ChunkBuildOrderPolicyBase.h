#pragma once

class ChunkBuildOrderPolicyBase {

public:
    virtual ~ChunkBuildOrderPolicyBase();
    virtual void registerForPositionUpdates(void);
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);

    void ChunkBuildOrderPolicyBase(void);
};
