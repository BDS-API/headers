#pragma once

#include "../chunksource/ChunkSource"
#include "../chunksource/DBChunkStorage"
#include "../../../core/Path"
#include "../LevelData"
#include "../../../unmapped/DBStorageConfig"


class DBStorage : LevelStorage {

public:
    virtual DBStorage::~DBStorage()
    virtual void addStorageObserver(std::unique_ptr<LevelStorageObserver, std::default_delete<LevelStorageObserver>>);
    virtual void getCompoundTag(std::string const&);
    virtual bool hasKey(gsl::basic_string_span<char const, -1l>)const;
    virtual void forEachKeyWithPrefix(gsl::basic_string_span<char const, -1l>, std::function<void ()(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const;
    virtual void loadLevelData(LevelData &);
    virtual void createChunkStorage(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, StorageVersion);
    virtual void saveLevelData(LevelData const&);
    virtual void getFullPath()const;
    virtual void saveData(std::string const&, std::string&&);
    virtual void createWriteBatch();
    virtual void deleteData(std::string const&);
    virtual void syncIO();
    virtual void getStatistics(std::string &)const;
    virtual bool isCorrupted()const;
    virtual void startShutdown();
    virtual void checkShutdownDone();
    virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const;
    virtual void getState()const;
    virtual void createSnapshot(std::string const&);
    virtual void releaseSnapshot();
    virtual void compactStorage();
    virtual void syncAndSuspendStorage();
    virtual void resumeStorage();
    virtual void setFlushAllowed(bool);
    virtual void flushToPermanentStorage();
    virtual void freeCaches();
    virtual void setCompactionCallback(std::function<void ()(CompactionStatus)>);
    virtual void setCriticalSyncSaveCallback(std::function<void ()(void)>);
    virtual void corruptLevel();
    virtual void _saveDataSync(gsl::basic_string_span<char const, -1l>, std::string &&);

    void tryRepair(Core::Path const&)const;
    DBStorage(DBStorageConfig);
    void _isMarkedAsCorrupted()const;
    void _removeCorruptedMark()const;
    void _queueSaveCallback(bool);
    void _isDBUsable(std::string const&, bool)const;
    void _isDBSaveable(std::string const&, bool)const;
    void getTaskGroup();
    void _write(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>);
    void _read(gsl::basic_string_span<char const, -1l>, std::function<void ()(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const;
    void _readPendingWrite(std::string const&)const;
    void _markAsCorrupted(gsl::basic_string_span<char const, -1l>)const;
    void _handleErrorStatus(leveldb::Status const&);
    void _write(leveldb::WriteBatch &);
    bool hasAnyKeyWithPrefix(leveldb::Slice const&)const;
    void _writeAsync(std::string const&, std::string&&);
    void _suspendAndPerformSaveAction(std::function<TaskResult ()(void)>, std::function<void ()(void)>);
    void _notifyChunkStorageDestroyed(DBChunkStorage &);
    void _scheduleNextAutoCompaction();
};
