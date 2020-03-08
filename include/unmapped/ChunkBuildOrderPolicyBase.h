#pragma once

#include "../bedrock/util/ChunkPos"


class ChunkBuildOrderPolicyBase {

public:
    virtual ChunkBuildOrderPolicyBase::~ChunkBuildOrderPolicyBase()
    virtual void registerForPositionUpdates();
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);

    ChunkBuildOrderPolicyBase(void);
};
