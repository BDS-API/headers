#pragma once

#include "../bedrock/level/LevelListener"
#include "../bedrock/level/LevelChunk"


class BlockActorLevelListener : LevelListener {

public:
    virtual BlockActorLevelListener::~BlockActorLevelListener();
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);

    BlockActorLevelListener(void);
};
