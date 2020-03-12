#pragma once

#include "../../level/LevelListener.h"


class BlockActorLevelListener : LevelListener {

public:
    virtual void onChunkUnloaded(LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    ~BlockActorLevelListener();
    BlockActorLevelListener();
};
