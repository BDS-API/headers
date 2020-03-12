#pragma once

#include "../../../unmapped/TaskResult.h"
#include <memory>
#include "../../../unmapped/DBStorageConfig.h"
#include <atomic>
#include "LevelStorage.h"
#include <string>
#include <functional>


class DBStorage : LevelStorage {

public:
    class DBStorageToken;
    class Options;
    class PendingWrite;

    virtual void saveData(std::string const&, std::string &&);
    virtual void flushToPermanentStorage();
    virtual void syncAndSuspendStorage();
    virtual void saveLevelData(LevelData const&);
//  virtual void createChunkStorage(std::unique_ptr<ChunkSource>, StorageVersion); //TODO: incomplete function definition
//  virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const; //TODO: incomplete function definition
    virtual void corruptLevel();
    virtual void createWriteBatch();
    virtual void deleteData(std::string const&);
    virtual std::string getFullPath()const;
//  virtual void forEachKeyWithPrefix(gsl::basic_string_span<char const, -1l>, std::function<void (gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const; //TODO: incomplete function definition
    virtual void resumeStorage();
    virtual void compactStorage();
    virtual void addStorageObserver(std::unique_ptr<LevelStorageObserver>);
    virtual void checkShutdownDone();
    virtual void syncIO();
    ~DBStorage();
//  virtual void _saveDataSync(gsl::basic_string_span<char const, -1l>, std::string &&); //TODO: incomplete function definition
    virtual void releaseSnapshot();
    virtual void startShutdown();
    virtual void getCompoundTag(std::string const&);
    virtual void freeCaches();
    virtual void getState()const;
    virtual void loadLevelData(LevelData &);
    virtual void setCompactionCallback(std::function<void (CompactionStatus)>);
    virtual bool isCorrupted()const;
    virtual void createSnapshot(std::string const&);
    virtual void setFlushAllowed(bool);
    virtual void setCriticalSyncSaveCallback(std::function<void (void)>);
//  virtual bool hasKey(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    virtual void getStatistics(std::string &)const;
//  std::string _getTelemetryMessage(leveldb::Status const&)const; //TODO: incomplete function definition
    void _isDBUsable(std::string const&, bool)const;
    void _scheduleNextAutoCompaction();
//  void _write(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void _removeCorruptedMark()const;
    void _isDBSaveable(std::string const&, bool)const;
//  void _markAsCorrupted(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void tryRepair(Core::Path const&)const;
    DBStorage(DBStorageConfig);
//  void _write(leveldb::WriteBatch &); //TODO: incomplete function definition
//  void _read(gsl::basic_string_span<char const, -1l>, std::function<void (gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const; //TODO: incomplete function definition
    void _queueSaveCallback(bool);
    void _suspendAndPerformSaveAction(std::function<TaskResult (void)>, std::function<void (void)>);
//  bool hasAnyKeyWithPrefix(leveldb::Slice const&)const; //TODO: incomplete function definition
    void _readPendingWrite(std::string const&)const;
    void _isMarkedAsCorrupted()const;
    void _writeAsync(std::string const&, std::string &&);
    void getTaskGroup();
    void _notifyChunkStorageDestroyed(DBChunkStorage &);
//  void _handleErrorStatus(leveldb::Status const&); //TODO: incomplete function definition
    std::string _corruptionMarkerPath()const;
    class DBStorageToken {

    public:
        DBStorageToken(DBStorage::DBStorageToken &&);
        DBStorageToken(std::atomic<int> &);
        DBStorageToken(DBStorage::DBStorageToken const&);
        ~DBStorageToken();
    };
    class Options {

    public:
        Options();
    };
    class PendingWrite {

    public:
        PendingWrite();
        ~PendingWrite();
    };
};
