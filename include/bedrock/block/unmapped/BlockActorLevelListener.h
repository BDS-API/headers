#pragma once

#include "../../level/LevelListener"
#include "../../level/LevelChunk"


class BlockActorLevelListener : LevelListener {

public:
    BlockActorLevelListener::~BlockActorLevelListener()
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);

    BlockActorLevelListener(void);
};
