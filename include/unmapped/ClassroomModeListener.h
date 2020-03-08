#pragma once

#include "../bedrock/actor/unmapped/ActorBlockSyncMessage"
#include "../bedrock/actor/Actor"
#include "../bedrock/eventing/IMinecraftEventing"
#include "../bedrock/level/LevelListener"
#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/level/LevelChunk"


class ClassroomModeListener : LevelListener {

public:
    ClassroomModeListener::~ClassroomModeListener()
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onEntityAdded(Actor &);
    virtual void onEntityRemoved(Actor &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);

    ClassroomModeListener(IMinecraftEventing &);
};
