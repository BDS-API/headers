#pragma once

#include "../biome/Biome.h"
#include <memory>
#include "./ChunkSource.h"
#include "../../util/ChunkPos.h"
#include "../LevelChunkFinalDeleter.h"
#include "../LevelChunk.h"
#include "../storage/LevelStorage.h"


class LegacyChunkStorage : ChunkSource {

public:
    virtual ~LegacyChunkStorage();
    virtual void loadChunk(LevelChunk &, bool);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

//  LegacyChunkStorage(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, LevelStorage &, StorageVersion, Biome &); //TODO: incomplete function definition
    void _loadEntities();
    void _collectInfo(bool *);
    void _isImported(ChunkPos const&);
    void _markChunkAsImported(ChunkPos const&);
    void _openRegionFile();
    void _loadChunk(LevelChunk &);
};
