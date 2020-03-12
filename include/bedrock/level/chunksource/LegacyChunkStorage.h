#pragma once

#include "../storage/LevelStorage.h"
#include "../../util/ChunkPos.h"
#include "../biome/Biome.h"
#include "ChunkSource.h"
#include <memory>
#include "../LevelChunk.h"


class LegacyChunkStorage : ChunkSource {

public:
    ~LegacyChunkStorage();
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void loadChunk(LevelChunk &, bool);
    void _isImported(ChunkPos const&);
    void _markChunkAsImported(ChunkPos const&);
    void _loadEntities();
    void _loadChunk(LevelChunk &);
    void _collectInfo(bool *);
//  LegacyChunkStorage(std::unique_ptr<ChunkSource>, LevelStorage &, StorageVersion, Biome &); //TODO: incomplete function definition
    void _openRegionFile();
};
