#pragma once

#include "../../unmapped/Dimension"
#include "../../unmapped/ChunkPos"


using namespace Level;

class LevelChunkQueuedSavingElement {

public:

    LevelChunkQueuedSavingElement(ChunkPos, AutomaticID<Dimension, int>, int);
};
