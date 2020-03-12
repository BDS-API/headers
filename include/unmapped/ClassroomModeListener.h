#pragma once

#include "../bedrock/level/LevelListener.h"


class ClassroomModeListener : LevelListener {

public:
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onEntityAdded(Actor &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
    ~ClassroomModeListener();
    virtual void onEntityRemoved(Actor &);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    ClassroomModeListener(IMinecraftEventing &);
};
