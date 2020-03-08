#pragma once

#include "../bedrock/util/ChunkPos"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/level/LevelChunk"


class Seasons {

public:

    Seasons(Dimension &);
    void tick();
    void postProcess(LevelChunk &, BlockSource &, ChunkPos const&);
};
