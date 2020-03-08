#pragma once

#include "../../level/LevelChunk"
#include "../../level/LevelListener"


class BlockActorLevelListener : LevelListener {

public:
    virtual BlockActorLevelListener::~BlockActorLevelListener()
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);

    BlockActorLevelListener(void);
};
