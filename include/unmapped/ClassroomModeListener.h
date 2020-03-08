#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/eventing/IMinecraftEventing"
#include "../bedrock/actor/unmapped/ActorBlockSyncMessage"
#include "../bedrock/level/LevelChunk"
#include "../bedrock/util/BlockPos"
#include "../bedrock/level/LevelListener"


class ClassroomModeListener : LevelListener {

public:
    virtual ClassroomModeListener::~ClassroomModeListener()
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onEntityAdded(Actor &);
    virtual void onEntityRemoved(Actor &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);

    ClassroomModeListener(IMinecraftEventing &);
};
