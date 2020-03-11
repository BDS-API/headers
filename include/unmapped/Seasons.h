#pragma once

#include "../bedrock/level/LevelChunk.h"
#include "../bedrock/util/ChunkPos.h"
#include "./Dimension.h"
#include "../bedrock/block/unmapped/BlockSource.h"


class Seasons {

public:

    Seasons(Dimension &);
    ~Seasons();
    void tick();
    void postProcess(LevelChunk &, BlockSource &, ChunkPos const&);
};
