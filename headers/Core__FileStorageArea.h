#pragma once

class Core::FileStorageArea {

public:
    virtual ~FileStorageArea();
    virtual void notifyChangeInFileSize(long, long);
    virtual void handlesPendingWrites(void)const;
    virtual void informPendingWriteSize(unsigned long);
    virtual void supportsExtendSize(void)const;
    virtual bool canExtendSize(void)const;
    virtual void resetCanAttemptExtendSize(void);
    virtual void getExtendSizeThreshold(unsigned long &)const;
    virtual void attemptExtendSize(long const&, std::function<void ()(void)>);
    virtual void preemptiveExtendSize(unsigned long, std::function<void ()(void)>, std::function<void ()(void)>);
    virtual void unloadFlatFileManifests(bool);
    virtual bool canFlushToDisk(void)const;
    virtual void needsTick(void)const;
    virtual void tick(void);
    virtual void flushImmediately(void);
    virtual void enableFlushToDisk(bool);
    virtual void getFlushableLevelDbEnvType(void)const;
    virtual void getTransactionWriteSizeLimit(void)const;
    virtual void setSaveDataIcon(Core::Path const&);
    virtual void onFlushTransactionComplete(void);
    virtual void _commit(void);
    virtual void _onTransactionsEmpty(bool);

    bool isOutOfDiskSpaceError(void)const;
    void notifyCriticalDiskError(Core::LevelStorageState const&);
    void _getFlatFileManifestTracker(void);
    void getStorageAreaForPath(std::shared_ptr<Core::FileStorageArea> &, Core::Path const&);
    void _getStorageAreaForPathImpl(std::shared_ptr<Core::FileStorageArea> &, Core::Path const&);
    void unloadAllStorageAreaFlatFileManifests(bool);
    void FileStorageArea(Core::FileAccessType, Core::Path const&, bool, bool);
    void setLoggingEnabled(bool);
    void getAccessType(void)const;
    void _notifyBeginWrite(void);
    void _notifyEndWrite(void);
    void _onWriteFile(Core::Path);
    void _onDeleteFile(Core::Path);
    void _getNumWriteTransactions(void)const;
    void _getNumAllTransactions(void)const;
    void _suspendFileIO(void);
    void _resumeFileIO(void);
    void _beginTransaction(Core::FileSystemImpl *, bool);
    void _endTransaction(Core::FileSystemImpl *, bool);
    void _addWriteOperation(bool, unsigned long);
    void _addReadOperation(bool, unsigned long);
    void _addReadWriteOperation(bool, unsigned long, unsigned long);
    void getAvailableUserStorageSize(void);
    void checkUserStorage(void);
    void getTotalBytesWrittenAndReadFromAllStorageAreas(unsigned long &, unsigned long &);
    void updateFlatFileManifests(void);
    void addObserver(Core::FileStorageAreaObserver &);
    bool canWrite(void)const;
};
