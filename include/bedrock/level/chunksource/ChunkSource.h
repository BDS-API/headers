#pragma once

#include <memory>
#include <functional>


class ChunkSource {

public:
    ~ChunkSource(); // _ZN11ChunkSourceD2Ev
    virtual void shutdown(); // _ZN11ChunkSource8shutdownEv
    virtual bool isShutdownDone(); // _ZN11ChunkSource14isShutdownDoneEv
    virtual void getExistingChunk(ChunkPos const&); // _ZN11ChunkSource16getExistingChunkERK8ChunkPos
    virtual void getRandomChunk(Random &); // _ZN11ChunkSource14getRandomChunkER6Random
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition // _ZN11ChunkSource14createNewChunkERK8ChunkPosNS_8LoadModeE
//  virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition // _ZN11ChunkSource14getOrLoadChunkERK8ChunkPosNS_8LoadModeE
    virtual void postProcess(ChunkViewSource &); // _ZN11ChunkSource11postProcessER15ChunkViewSource
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &); // _ZN11ChunkSource20checkAndReplaceChunkER15ChunkViewSourceR10LevelChunk
    virtual void loadChunk(LevelChunk &, bool); // _ZN11ChunkSource9loadChunkER10LevelChunkb
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &); // _ZN11ChunkSource17postProcessMobsAtEP11BlockSourceiiR6Random
    virtual void saveLiveChunk(LevelChunk &); // _ZN11ChunkSource13saveLiveChunkER10LevelChunk
    virtual void hintDiscardBatchBegin(); // _ZN11ChunkSource21hintDiscardBatchBeginEv
    virtual void hintDiscardBatchEnd(); // _ZN11ChunkSource19hintDiscardBatchEndEv
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>); // _ZN11ChunkSource16acquireDiscardedESt10unique_ptrI10LevelChunk22LevelChunkFinalDeleterE
    virtual void compact(); // _ZN11ChunkSource7compactEv
    virtual void flushPendingWrites(); // _ZN11ChunkSource18flushPendingWritesEv
    virtual bool isWithinWorldLimit(ChunkPos const&)const; // _ZNK11ChunkSource18isWithinWorldLimitERK8ChunkPos
    virtual void getChunkMap(); // _ZN11ChunkSource11getChunkMapEv
    virtual void getStorage()const; // _ZNK11ChunkSource10getStorageEv
    virtual void clearDeletedEntities(); // _ZN11ChunkSource20clearDeletedEntitiesEv
//  void createEmptyView(ChunkSource::LoadMode, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); //TODO: incomplete function definition // _ZN11ChunkSource15createEmptyViewENS_8LoadModeEbSt8functionIFv15buffer_span_mutISt10shared_ptrI10LevelChunkEE11buffer_spanIjEEE
    void fireChunkLoaded(LevelChunk &); // _ZN11ChunkSource15fireChunkLoadedER10LevelChunk
    void checkAndLaunchChunkGenerationTasks(bool); // _ZN11ChunkSource34checkAndLaunchChunkGenerationTasksEb
    void _hasTooManyChunksPendingDelete()const; // _ZNK11ChunkSource30_hasTooManyChunksPendingDeleteEv
    void _spawnChunkGenerationTasks(int, bool); // _ZN11ChunkSource26_spawnChunkGenerationTasksEib
    void _checkAndDispatchTaskForLevelChunk(ChunkPos const&, bool); // _ZN11ChunkSource34_checkAndDispatchTaskForLevelChunkERK8ChunkPosb
    void _dispatchTaskForLevelChunk(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool); // _ZN11ChunkSource26_dispatchTaskForLevelChunkERSt10shared_ptrI10LevelChunkES0_I15ChunkViewSourceEb
    void _launchGenerationTask(std::shared_ptr<LevelChunk> &, bool); // _ZN11ChunkSource21_launchGenerationTaskERSt10shared_ptrI10LevelChunkEb
    void _launchPostProcessingTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool); // _ZN11ChunkSource25_launchPostProcessingTaskERSt10shared_ptrI10LevelChunkES0_I15ChunkViewSourceEb
    void _launchReplacementDataTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool); // _ZN11ChunkSource26_launchReplacementDataTaskERSt10shared_ptrI10LevelChunkES0_I15ChunkViewSourceEb
    void _launchLightingTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool); // _ZN11ChunkSource19_launchLightingTaskERSt10shared_ptrI10LevelChunkES0_I15ChunkViewSourceEb
    void getDimension()const; // _ZNK11ChunkSource12getDimensionEv
    void _loadChunkTask(LevelChunk &); // _ZN11ChunkSource14_loadChunkTaskER10LevelChunk
    void _decrementTaskCountAndLaunchNewTasksFromTask(); // _ZN11ChunkSource44_decrementTaskCountAndLaunchNewTasksFromTaskEv
    void _checkForUnblockingChunks(LevelChunk &); // _ZN11ChunkSource25_checkForUnblockingChunksER10LevelChunk
    void _postProcessingTask(LevelChunk &, std::shared_ptr<ChunkViewSource>); // _ZN11ChunkSource19_postProcessingTaskER10LevelChunkSt10shared_ptrI15ChunkViewSourceE
    void _checkForReplacementDataTask(LevelChunk &, std::shared_ptr<ChunkViewSource>); // _ZN11ChunkSource28_checkForReplacementDataTaskER10LevelChunkSt10shared_ptrI15ChunkViewSourceE
    void _lightingTask(std::shared_ptr<LevelChunk>, std::shared_ptr<ChunkViewSource>); // _ZN11ChunkSource13_lightingTaskESt10shared_ptrI10LevelChunkES0_I15ChunkViewSourceE
    void _checkSpecificLevelChunkForUnblocking(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>); // _ZN11ChunkSource37_checkSpecificLevelChunkForUnblockingESt10shared_ptrI10LevelChunkES0_I25LevelChunkGridAreaElementISt8weak_ptrIS1_EEE
    void _checkLevelChunkForPostProcessing(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>); // _ZN11ChunkSource33_checkLevelChunkForPostProcessingESt10shared_ptrI10LevelChunkES0_I25LevelChunkGridAreaElementISt8weak_ptrIS1_EEE
//  void _checkLevelChunkForNextStage(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>, ChunkState); //TODO: incomplete function definition // _ZN11ChunkSource28_checkLevelChunkForNextStageESt10shared_ptrI10LevelChunkES0_I25LevelChunkGridAreaElementISt8weak_ptrIS1_EEE10ChunkState
//  void _chunkAtStage(std::weak_ptr<LevelChunk>, ChunkState); //TODO: incomplete function definition // _ZN11ChunkSource13_chunkAtStageESt8weak_ptrI10LevelChunkE10ChunkState
    ChunkSource(Dimension *, int); // _ZN11ChunkSourceC2EP9Dimensioni
    ChunkSource(ChunkSource &); // _ZN11ChunkSourceC2ERS_
    void getChunkSide()const; // _ZNK11ChunkSource12getChunkSideEv
    ChunkSource(std::unique_ptr<ChunkSource>); // _ZN11ChunkSourceC2ESt10unique_ptrIS_St14default_deleteIS_EE
    void getLevel()const; // _ZNK11ChunkSource8getLevelEv
    void _freeChunkGenerationGridMap(ChunkPos const&); // _ZN11ChunkSource27_freeChunkGenerationGridMapERK8ChunkPos
    void getParent()const; // _ZNK11ChunkSource9getParentEv
    void getAvailableChunk(ChunkPos const&); // _ZN11ChunkSource17getAvailableChunkERK8ChunkPos
    void getGeneratedChunk(ChunkPos const&); // _ZN11ChunkSource17getGeneratedChunkERK8ChunkPos
    void getAvailableChunkAt(BlockPos const&); // _ZN11ChunkSource19getAvailableChunkAtERK8BlockPos
};
