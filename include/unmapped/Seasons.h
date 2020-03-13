#pragma once



class Seasons {

public:
    Seasons(Dimension &); // _ZN7SeasonsC2ER9Dimension
    ~Seasons(); // _ZN7SeasonsD2Ev
    void tick(); // _ZN7Seasons4tickEv
    void postProcess(LevelChunk &, BlockSource &, ChunkPos const&); // _ZN7Seasons11postProcessER10LevelChunkR11BlockSourceRK8ChunkPos
};
