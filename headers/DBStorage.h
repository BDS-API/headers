#pragma once

class DBStorage : LevelStorage {

public:
    virtual ~DBStorage();
    virtual void addStorageObserver(std::unique_ptr<LevelStorageObserver, std::default_delete<LevelStorageObserver>>);
    virtual void tick(void);
    virtual void getCompoundTag(std::string const&);
    virtual bool hasKey(gsl::basic_string_span<char const, -1l>)const;
    virtual void forEachKeyWithPrefix(gsl::basic_string_span<char const, -1l>, std::function<void ()(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const;
    virtual void loadLevelData(LevelData &);
    virtual void createChunkStorage(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, StorageVersion);
    virtual void saveLevelData(LevelData const&);
    virtual void getFullPath[abi:cxx11](void)const;
    virtual void saveData(std::string const&, std::string&&);
    virtual void createWriteBatch(void);
    virtual void saveDataSync(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>);
    virtual void deleteData(std::string const&);
    virtual void syncIO(void);
    virtual void getStatistics(std::string &)const;
    virtual bool isCorrupted(void)const;
    virtual void startShutdown(void);
    virtual void checkShutdownDone(void);
    virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const;
    virtual void getState(void)const;
    virtual void createSnapshot(std::string const&);
    virtual void releaseSnapshot(void);
    virtual void compactStorage(void);
    virtual void syncAndSuspendStorage(void);
    virtual void resumeStorage(void);
    virtual void setFlushAllowed(bool);
    virtual void flushToPermanentStorage(void);
    virtual void freeCaches(void);
    virtual void setCompactionCallback(std::function<void ()(CompactionStatus)>);
    virtual void setCriticalSyncSaveCallback(std::function<void ()(void)>);
    virtual void corruptLevel(void);
    virtual void _saveDataSync(gsl::basic_string_span<char const, -1l>, std::string &&);

    void tryRepair(Core::Path const&)const;
    void DBStorage(DBStorage::Config);
    void _isMarkedAsCorrupted(void)const;
    void _removeCorruptedMark(void)const;
    void _queueSaveCallback(bool);
    void _tryAutoCompaction(void);
    void _isDBUsable(std::string const&, bool)const;
    void _isDBSaveable(std::string const&, bool)const;
    void getTaskGroup(void);
    void _write(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>);
    void _read(gsl::basic_string_span<char const, -1l>, std::function<void ()(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&)const;
    void _waitForPendingKeyWrite(std::string const&)const;
    void _markAsCorrupted(gsl::basic_string_span<char const, -1l>)const;
    void _handleErrorStatus(leveldb::Status const&);
    void _write(leveldb::WriteBatch &);
    bool hasAnyKeyWithPrefix(leveldb::Slice const&)const;
    void _writeAsync(std::string const&, std::string&&);
    void _suspendAndPerformSaveAction(std::function<TaskResult ()(void)>, std::function<void ()(void)>);
    void _notifyChunkStorageDestroyed(DBChunkStorage &);
};
