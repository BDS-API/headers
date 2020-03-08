#pragma once

#include "../bedrock/level/LevelChunk"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/ChunkPos"


class Seasons {

public:

    Seasons(Dimension &);
    void tick();
    void postProcess(LevelChunk &, BlockSource &, ChunkPos const&);
};
