#pragma once

class LegacyChunkStorage : ChunkSource {

public:
    virtual ~LegacyChunkStorage();
    virtual void loadChunk(LevelChunk &, bool);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, std::default_delete<LevelChunk>>);

    void LegacyChunkStorage(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, LevelStorage &, StorageVersion, Biome &);
    void _loadEntities(void);
    void _collectInfo(bool *);
    void _isImported(ChunkPos const&);
    void _markChunkAsImported(ChunkPos const&);
    void _openRegionFile(void);
    void _loadChunk(LevelChunk &);
};
