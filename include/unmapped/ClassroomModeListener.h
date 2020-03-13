#pragma once

#include "../bedrock/level/LevelListener.h"


class ClassroomModeListener : LevelListener {

public:
    ~ClassroomModeListener(); // _ZN21ClassroomModeListenerD2Ev
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&); // _ZN21ClassroomModeListener13onAreaChangedER11BlockSourceRK8BlockPosS4_
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*); // _ZN21ClassroomModeListener14onBlockChangedER11BlockSourceRK8BlockPosjRK5BlockS7_iPK21ActorBlockSyncMessage
    virtual void onEntityAdded(Actor &); // _ZN21ClassroomModeListener13onEntityAddedER5Actor
    virtual void onEntityRemoved(Actor &); // _ZN21ClassroomModeListener15onEntityRemovedER5Actor
    virtual void onChunkLoaded(LevelChunk &); // _ZN21ClassroomModeListener13onChunkLoadedER10LevelChunk
    virtual void onChunkUnloaded(LevelChunk &); // _ZN21ClassroomModeListener15onChunkUnloadedER10LevelChunk
    ClassroomModeListener(IMinecraftEventing &); // _ZN21ClassroomModeListenerC2ER18IMinecraftEventing
};
