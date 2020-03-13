#pragma once

#include "../../level/LevelListener.h"


class BlockActorLevelListener : LevelListener {

public:
    ~BlockActorLevelListener(); // _ZN23BlockActorLevelListenerD2Ev
    virtual void onChunkLoaded(LevelChunk &); // _ZN23BlockActorLevelListener13onChunkLoadedER10LevelChunk
    virtual void onChunkUnloaded(LevelChunk &); // _ZN23BlockActorLevelListener15onChunkUnloadedER10LevelChunk
    BlockActorLevelListener(); // _ZN23BlockActorLevelListenerC2Ev
};
