#pragma once

class WorldGenerator {

    virtual void WorldGenerator::~WorldGenerator();
    virtual void WorldGenerator::~WorldGenerator();
    virtual void shutdown(void);
    virtual void isShutdownDone(void);
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void debugRender(void);
    virtual void addHardcodedSpawnAreas(LevelChunk &);
}
