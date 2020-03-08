#pragma once

#include "../../unmapped/Dimension"
#include "../util/ChunkPos"


using namespace Level;

class LevelChunkQueuedSavingElement {

public:

    LevelChunkQueuedSavingElement(ChunkPos, AutomaticID<Dimension, int>, int);
};
