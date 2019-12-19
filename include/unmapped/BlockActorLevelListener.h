#pragma once

class BlockActorLevelListener : LevelListener {

public:
    virtual BlockActorLevelListener::~BlockActorLevelListener();
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);

    BlockActorLevelListener(void);
};
