#pragma once

#include "../LevelChunk"
#include "../biome/Biome"
#include "../../util/ChunkPos"
#include "../LevelChunkFinalDeleter"
#include "../storage/LevelStorage"


class LegacyChunkStorage : ChunkSource {

public:
    LegacyChunkStorage::~LegacyChunkStorage()
    virtual void loadChunk(LevelChunk &, bool);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    LegacyChunkStorage(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, LevelStorage &, StorageVersion, Biome &);
    void _loadEntities();
    void _collectInfo(bool *);
    void _isImported(ChunkPos const&);
    void _markChunkAsImported(ChunkPos const&);
    void _openRegionFile();
    void _loadChunk(LevelChunk &);
};
