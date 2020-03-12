#pragma once

#include "../bedrock/level/LevelListener.h"
#include "../bedrock/actor/unmapped/ActorBlockSyncMessage.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/level/LevelChunk.h"
#include "Block.h"
#include "../bedrock/eventing/IMinecraftEventing.h"
#include "../bedrock/actor/Actor.h"


class ClassroomModeListener : LevelListener {

public:
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onEntityRemoved(Actor &);
    virtual void onChunkUnloaded(LevelChunk &);
    ~ClassroomModeListener();
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onEntityAdded(Actor &);
    ClassroomModeListener(IMinecraftEventing &);
};
