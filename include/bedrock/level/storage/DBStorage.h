#pragma once

#include "../chunksource/DBChunkStorage.h"
#include "../../../core/Path.h"
#include "../LevelData.h"
#include <memory>
#include "./LevelStorage.h"
#include "../../../unmapped/DBStorageConfig.h"
#include "../LevelStorageObserver.h"
#include "../../../unmapped/TaskResult.h"
#include "../chunksource/ChunkSource.h"
#include <functional>
#include <string>


class DBStorage : LevelStorage {

public:
    virtual ~DBStorage();
    virtual void addStorageObserver(std::unique_ptr<LevelStorageObserver, std::default_delete<LevelStorageObserver>>);
    virtual void getCompoundTag(std::string const&);
//  virtual bool hasKey(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
//  virtual void forEachKeyWithPrefix(gsl::basic_string_span<char const, -1l>, std::function<void (gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const; //TODO: incomplete function definition
    virtual void loadLevelData(LevelData &);
//  virtual void createChunkStorage(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, StorageVersion); //TODO: incomplete function definition
    virtual void saveLevelData(LevelData const&);
    virtual std::string getFullPath()const;
    virtual void saveData(std::string const&, std::string &&);
    virtual void createWriteBatch();
    virtual void deleteData(std::string const&);
    virtual void syncIO();
    virtual void getStatistics(std::string &)const;
    virtual bool isCorrupted()const;
    virtual void startShutdown();
    virtual void checkShutdownDone();
//  virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const; //TODO: incomplete function definition
    virtual void getState()const;
    virtual void createSnapshot(std::string const&);
    virtual void releaseSnapshot();
    virtual void compactStorage();
    virtual void syncAndSuspendStorage();
    virtual void resumeStorage();
    virtual void setFlushAllowed(bool);
    virtual void flushToPermanentStorage();
    virtual void freeCaches();
//  virtual void setCompactionCallback(std::function<void (CompactionStatus)>); //TODO: incomplete function definition
//  virtual void setCriticalSyncSaveCallback(std::function<void (void)>); //TODO: incomplete function definition
    virtual void corruptLevel();
//  virtual void _saveDataSync(gsl::basic_string_span<char const, -1l>, std::string &&); //TODO: incomplete function definition

    void tryRepair(Core::Path const&)const;
    DBStorage(DBStorageConfig);
    void _isMarkedAsCorrupted()const;
    void _removeCorruptedMark()const;
//  std::string _getTelemetryMessage(leveldb::Status const&)const; //TODO: incomplete function definition
    void _queueSaveCallback(bool);
    void _isDBUsable(std::string const&, bool)const;
    void _isDBSaveable(std::string const&, bool)const;
    void getTaskGroup();
//  void _write(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  void _read(gsl::basic_string_span<char const, -1l>, std::function<void (gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const; //TODO: incomplete function definition
    void _readPendingWrite(std::string const&)const;
    std::string _corruptionMarkerPath()const;
//  void _markAsCorrupted(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
//  void _handleErrorStatus(leveldb::Status const&); //TODO: incomplete function definition
//  void _write(leveldb::WriteBatch &); //TODO: incomplete function definition
//  bool hasAnyKeyWithPrefix(leveldb::Slice const&)const; //TODO: incomplete function definition
    void _writeAsync(std::string const&, std::string &&);
//  void _suspendAndPerformSaveAction(std::function<TaskResult (void)>, std::function<void (void)>); //TODO: incomplete function definition
    void _notifyChunkStorageDestroyed(DBChunkStorage &);
    void _scheduleNextAutoCompaction();
};
