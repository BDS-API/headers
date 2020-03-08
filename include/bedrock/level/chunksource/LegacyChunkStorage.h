#pragma once

#include "../LevelChunkFinalDeleter"
#include "../biome/Biome"
#include "../LevelChunk"
#include "../../util/ChunkPos"
#include "../storage/LevelStorage"


class LegacyChunkStorage : ChunkSource {

public:
    virtual LegacyChunkStorage::~LegacyChunkStorage()
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
