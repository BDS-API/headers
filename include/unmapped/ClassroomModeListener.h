#pragma once

#include "../bedrock/eventing/IMinecraftEventing.h"
#include "../bedrock/actor/unmapped/ActorBlockSyncMessage.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/level/LevelChunk.h"
#include "./Block.h"
#include "../bedrock/level/LevelListener.h"
#include "../bedrock/util/BlockPos.h"


class ClassroomModeListener : LevelListener {

public:
    virtual ~ClassroomModeListener();
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onEntityAdded(Actor &);
    virtual void onEntityRemoved(Actor &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);

    ClassroomModeListener(IMinecraftEventing &);
};
