#pragma once

#include <memory>
#include <functional>


class ChunkSource {

public:
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
    virtual void getRandomChunk(Random &);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void postProcess(ChunkViewSource &);
    virtual void compact();
    virtual bool isShutdownDone();
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &);
    virtual void shutdown();
    virtual bool isWithinWorldLimit(ChunkPos const&)const;
//  virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void clearDeletedEntities();
    virtual void getStorage()const;
    virtual void flushPendingWrites();
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void hintDiscardBatchEnd();
    virtual void getChunkMap();
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void hintDiscardBatchBegin();
    virtual void getExistingChunk(ChunkPos const&);
    ~ChunkSource();
    void _checkForUnblockingChunks(LevelChunk &);
    void checkAndLaunchChunkGenerationTasks(bool);
    ChunkSource(ChunkSource &);
    void getLevel()const;
    void getAvailableChunk(ChunkPos const&);
    void getDimension()const;
    void _checkSpecificLevelChunkForUnblocking(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>);
//  void _checkLevelChunkForNextStage(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>, ChunkState); //TODO: incomplete function definition
    void _loadChunkTask(LevelChunk &);
    void getParent()const;
    void _lightingTask(std::shared_ptr<LevelChunk>, std::shared_ptr<ChunkViewSource>);
    void _checkForReplacementDataTask(LevelChunk &, std::shared_ptr<ChunkViewSource>);
//  void _chunkAtStage(std::weak_ptr<LevelChunk>, ChunkState); //TODO: incomplete function definition
    void _hasTooManyChunksPendingDelete()const;
    void _freeChunkGenerationGridMap(ChunkPos const&);
    void getChunkSide()const;
    void _decrementTaskCountAndLaunchNewTasksFromTask();
    void _launchReplacementDataTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    ChunkSource(std::unique_ptr<ChunkSource>);
    void _dispatchTaskForLevelChunk(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    void _launchLightingTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
//  void createEmptyView(ChunkSource::LoadMode, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); //TODO: incomplete function definition
    ChunkSource(Dimension *, int);
    void _checkLevelChunkForPostProcessing(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>);
    void _launchPostProcessingTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    void getGeneratedChunk(ChunkPos const&);
    void _spawnChunkGenerationTasks(int, bool);
    void getAvailableChunkAt(BlockPos const&);
    void _postProcessingTask(LevelChunk &, std::shared_ptr<ChunkViewSource>);
    void fireChunkLoaded(LevelChunk &);
    void _launchGenerationTask(std::shared_ptr<LevelChunk> &, bool);
    void _checkAndDispatchTaskForLevelChunk(ChunkPos const&, bool);
};
