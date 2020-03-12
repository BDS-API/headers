#pragma once

#include "../bedrock/util/ChunkPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/level/LevelChunk.h"
#include "Dimension.h"


class Seasons {

public:
    Seasons(Dimension &);
    ~Seasons();
    void tick();
    void postProcess(LevelChunk &, BlockSource &, ChunkPos const&);
};
