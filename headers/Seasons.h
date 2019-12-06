#pragma once

class Seasons {

public:

    void Seasons(Dimension &);
    void tick(void);
    void postProcess(LevelChunk &, BlockSource &, ChunkPos const&);
};
