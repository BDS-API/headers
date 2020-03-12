#pragma once



class Seasons {

public:
    void tick();
    ~Seasons();
    Seasons(Dimension &);
    void postProcess(LevelChunk &, BlockSource &, ChunkPos const&);
};
