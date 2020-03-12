#pragma once

#include "ChunkViewSource.h"
#include "../../util/ChunkPos.h"
#include "../LevelChunk.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include <functional>
#include <memory>
#include "../../util/BlockPos.h"
#include "../../../unmapped/Dimension.h"


class ChunkSource {

public:
    virtual void getStorage()const;
    virtual void loadChunk(LevelChunk &, bool);
    virtual void compact();
    virtual bool isShutdownDone();
    virtual void getChunkMap();
    virtual void getExistingChunk(ChunkPos const&);
    virtual void shutdown();
    virtual void flushPendingWrites();
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
    virtual void saveLiveChunk(LevelChunk &);
    virtual bool isWithinWorldLimit(ChunkPos const&)const;
    virtual void clearDeletedEntities();
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &);
    virtual void hintDiscardBatchBegin();
//  virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void getRandomChunk(Random &);
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void hintDiscardBatchEnd();
    virtual void postProcess(ChunkViewSource &);
    ~ChunkSource();
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    void _checkAndDispatchTaskForLevelChunk(ChunkPos const&, bool);
//  void _checkLevelChunkForNextStage(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>, ChunkState); //TODO: incomplete function definition
    void _lightingTask(std::shared_ptr<LevelChunk>, std::shared_ptr<ChunkViewSource>);
    ChunkSource(ChunkSource &);
    void getParent()const;
    void _launchReplacementDataTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    void getAvailableChunk(ChunkPos const&);
    void fireChunkLoaded(LevelChunk &);
//  void _checkLevelChunkForPostProcessing(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>); //TODO: incomplete function definition
    void _decrementTaskCountAndLaunchNewTasksFromTask();
    void _freeChunkGenerationGridMap(ChunkPos const&);
    void _launchLightingTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    void getDimension()const;
    void getLevel()const;
    void _dispatchTaskForLevelChunk(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    void _loadChunkTask(LevelChunk &);
    void _launchPostProcessingTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    ChunkSource(Dimension *, int);
//  void createEmptyView(ChunkSource::LoadMode, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); //TODO: incomplete function definition
    void _hasTooManyChunksPendingDelete()const;
    void _checkForUnblockingChunks(LevelChunk &);
    void _checkForReplacementDataTask(LevelChunk &, std::shared_ptr<ChunkViewSource>);
    void getAvailableChunkAt(BlockPos const&);
    void _spawnChunkGenerationTasks(int, bool);
    void getChunkSide()const;
    void _postProcessingTask(LevelChunk &, std::shared_ptr<ChunkViewSource>);
    ChunkSource(std::unique_ptr<ChunkSource>);
    void getGeneratedChunk(ChunkPos const&);
//  void _chunkAtStage(std::weak_ptr<LevelChunk>, ChunkState); //TODO: incomplete function definition
    void _launchGenerationTask(std::shared_ptr<LevelChunk> &, bool);
    void checkAndLaunchChunkGenerationTasks(bool);
//  void _checkSpecificLevelChunkForUnblocking(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>); //TODO: incomplete function definition
};
