#pragma once

#include "../../level/LevelListener.h"
#include "../../level/LevelChunk.h"


class BlockActorLevelListener : LevelListener {

public:
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
    ~BlockActorLevelListener();
    BlockActorLevelListener();
};
