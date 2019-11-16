#pragma once

class WorldGenerator {

    virtual void ~WorldGenerator();
    virtual void ~WorldGenerator();
    virtual void ChunkSource::shutdown(void);
    virtual void ChunkSource::isShutdownDone(void);
    virtual void ChunkSource::getExistingChunk(ChunkPos const&);
    virtual void ChunkSource::getRandomChunk(Random &);
    virtual void ChunkSource::createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void ChunkSource::getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void debugRender(void);
    virtual void addHardcodedSpawnAreas(LevelChunk &);
}
