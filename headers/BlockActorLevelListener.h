#pragma once

class BlockActorLevelListener : LevelListener {

public:
    virtual ~BlockActorLevelListener();
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);

    void BlockActorLevelListener(void);
};
