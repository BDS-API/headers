#pragma once

class Seasons {

public:

    Seasons(Dimension &);
    void tick(void);
    void postProcess(LevelChunk &, BlockSource &, ChunkPos const&);
};
