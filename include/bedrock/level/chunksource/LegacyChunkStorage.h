#pragma once

#include <memory>
#include "ChunkSource.h"


class LegacyChunkStorage : ChunkSource {

public:
    ~LegacyChunkStorage();
    virtual void loadChunk(LevelChunk &, bool);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
//  LegacyChunkStorage(std::unique_ptr<ChunkSource>, LevelStorage &, StorageVersion, Biome &); //TODO: incomplete function definition
    void _openRegionFile();
    void _collectInfo(bool *);
    void _markChunkAsImported(ChunkPos const&);
    void _loadEntities();
    void _loadChunk(LevelChunk &);
    void _isImported(ChunkPos const&);
};
