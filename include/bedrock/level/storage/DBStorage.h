#pragma once

#include "../LevelData.h"
#include <string>
#include "../chunksource/DBChunkStorage.h"
#include "LevelStorage.h"
#include "../../../unmapped/DBStorageConfig.h"
#include "../LevelStorageObserver.h"
#include "../chunksource/ChunkSource.h"
#include <functional>
#include <atomic>
#include <memory>
#include "../../../unmapped/TaskResult.h"
#include "../../../core/Path.h"


class DBStorage : LevelStorage {

public:
    class DBStorageToken;
    class Options;
    class PendingWrite;

    virtual void compactStorage();
    virtual void releaseSnapshot();
    virtual void saveData(std::string const&, std::string &&);
    virtual bool isCorrupted()const;
    virtual void syncAndSuspendStorage();
    virtual void corruptLevel();
    virtual void createSnapshot(std::string const&);
//  virtual void createChunkStorage(std::unique_ptr<ChunkSource>, StorageVersion); //TODO: incomplete function definition
//  virtual void forEachKeyWithPrefix(gsl::basic_string_span<char const, -1l>, std::function<void (gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const; //TODO: incomplete function definition
//  virtual void _saveDataSync(gsl::basic_string_span<char const, -1l>, std::string &&); //TODO: incomplete function definition
    virtual void syncIO();
    virtual void saveLevelData(LevelData const&);
    virtual void flushToPermanentStorage();
    virtual void deleteData(std::string const&);
//  virtual bool hasKey(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    virtual void getState()const;
//  virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const; //TODO: incomplete function definition
    virtual void loadLevelData(LevelData &);
    virtual void checkShutdownDone();
//  virtual void setCompactionCallback(std::function<void (CompactionStatus)>); //TODO: incomplete function definition
    virtual std::string getFullPath()const;
    virtual void getStatistics(std::string &)const;
    virtual void setCriticalSyncSaveCallback(std::function<void (void)>);
    virtual void createWriteBatch();
    virtual void resumeStorage();
    virtual void freeCaches();
    virtual void addStorageObserver(std::unique_ptr<LevelStorageObserver>);
    virtual void startShutdown();
    virtual void getCompoundTag(std::string const&);
    ~DBStorage();
    virtual void setFlushAllowed(bool);
    void _isMarkedAsCorrupted()const;
    void _readPendingWrite(std::string const&)const;
    void _scheduleNextAutoCompaction();
    std::string _corruptionMarkerPath()const;
//  std::string _getTelemetryMessage(leveldb::Status const&)const; //TODO: incomplete function definition
//  void _handleErrorStatus(leveldb::Status const&); //TODO: incomplete function definition
    void _isDBSaveable(std::string const&, bool)const;
//  void _write(leveldb::WriteBatch &); //TODO: incomplete function definition
    void _writeAsync(std::string const&, std::string &&);
//  void _write(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void _suspendAndPerformSaveAction(std::function<TaskResult (void)>, std::function<void (void)>);
    void _isDBUsable(std::string const&, bool)const;
    DBStorage(DBStorageConfig);
    void _notifyChunkStorageDestroyed(DBChunkStorage &);
    void _removeCorruptedMark()const;
    void getTaskGroup();
    void _queueSaveCallback(bool);
//  void _markAsCorrupted(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
//  bool hasAnyKeyWithPrefix(leveldb::Slice const&)const; //TODO: incomplete function definition
//  void _read(gsl::basic_string_span<char const, -1l>, std::function<void (gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const; //TODO: incomplete function definition
    void tryRepair(Core::Path const&)const;
    class DBStorageToken {

    public:
        ~DBStorageToken();
        DBStorageToken(DBStorage::DBStorageToken const&);
        DBStorageToken(DBStorage::DBStorageToken &&);
        DBStorageToken(std::atomic<int> &);
    };
    class Options {

    public:
        Options();
    };
    class PendingWrite {

    public:
        ~PendingWrite();
        PendingWrite();
    };
};
