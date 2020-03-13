#pragma once

#include <memory>
#include "ChunkSource.h"


class LegacyChunkStorage : ChunkSource {

public:
    ~LegacyChunkStorage(); // _ZN18LegacyChunkStorageD2Ev
    virtual void loadChunk(LevelChunk &, bool); // _ZN18LegacyChunkStorage9loadChunkER10LevelChunkb
    virtual void saveLiveChunk(LevelChunk &); // _ZN18LegacyChunkStorage13saveLiveChunkER10LevelChunk
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>); // _ZN18LegacyChunkStorage16acquireDiscardedESt10unique_ptrI10LevelChunk22LevelChunkFinalDeleterE
//  LegacyChunkStorage(std::unique_ptr<ChunkSource>, LevelStorage &, StorageVersion, Biome &); //TODO: incomplete function definition // _ZN18LegacyChunkStorageC2ESt10unique_ptrI11ChunkSourceSt14default_deleteIS1_EER12LevelStorage14StorageVersionR5Biome
    void _loadEntities(); // _ZN18LegacyChunkStorage13_loadEntitiesEv
    void _collectInfo(bool *); // _ZN18LegacyChunkStorage12_collectInfoEPb
    void _isImported(ChunkPos const&); // _ZN18LegacyChunkStorage11_isImportedERK8ChunkPos
    void _markChunkAsImported(ChunkPos const&); // _ZN18LegacyChunkStorage20_markChunkAsImportedERK8ChunkPos
    void _openRegionFile(); // _ZN18LegacyChunkStorage15_openRegionFileEv
    void _loadChunk(LevelChunk &); // _ZN18LegacyChunkStorage10_loadChunkER10LevelChunk
};
