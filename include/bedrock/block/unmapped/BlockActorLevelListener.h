#pragma once

#include "../../level/LevelChunk.h"
#include "../../level/LevelListener.h"


class BlockActorLevelListener : LevelListener {

public:
    virtual ~BlockActorLevelListener();
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);

    BlockActorLevelListener();
};
