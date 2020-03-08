#pragma once

#include "../util/ChunkPos"
#include "../../unmapped/Dimension"


using namespace Level;

class LevelChunkQueuedSavingElement {

public:

    LevelChunkQueuedSavingElement(ChunkPos, AutomaticID<Dimension, int>, int);
};
