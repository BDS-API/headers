#pragma once

#include "../../level/LevelListener.h"


class BlockActorLevelListener : public LevelListener {

public:
    virtual ~BlockActorLevelListener(); // _ZN23BlockActorLevelListenerD2Ev
    virtual void __fake_function0(); // fake
    virtual void onChunkLoaded(LevelChunk &); // _ZN23BlockActorLevelListener13onChunkLoadedER10LevelChunk
    virtual void onChunkUnloaded(LevelChunk &); // _ZN23BlockActorLevelListener15onChunkUnloadedER10LevelChunk
    BlockActorLevelListener(); // _ZN23BlockActorLevelListenerC2Ev
};
