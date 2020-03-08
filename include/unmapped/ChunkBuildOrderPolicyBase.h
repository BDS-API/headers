#pragma once

#include "../bedrock/util/ChunkPos"


class ChunkBuildOrderPolicyBase {

public:
    ChunkBuildOrderPolicyBase::~ChunkBuildOrderPolicyBase()
    virtual void registerForPositionUpdates();
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);

    ChunkBuildOrderPolicyBase(void);
};
