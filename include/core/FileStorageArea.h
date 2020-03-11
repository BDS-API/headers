#pragma once

#include <memory>
#include "./FileStorageArea.h"
#include "./FileSystemImpl.h"
#include <functional>
#include "./Path.h"
#include <string>


namespace Core {

class FileStorageArea {

public:
    virtual ~FileStorageArea();
    virtual void notifyChangeInFileSize(long, long);
    virtual bool handlesPendingWrites()const;
    virtual void informPendingWriteSize(unsigned long const&, bool);
    virtual void informStorageAreaCopy(unsigned long const&);
    virtual bool supportsExtendSize()const;
    virtual bool canExtendSize()const;
    virtual void resetCanAttemptExtendSize();
    virtual void getExtendSizeThreshold(unsigned long &)const;
//  virtual void attemptExtendSize(long const&, std::function<void (void)>); //TODO: incomplete function definition
//  virtual void preemptiveExtendSize(unsigned long, std::function<void (void)>, std::function<void (void)>); //TODO: incomplete function definition
    virtual void unloadFlatFileManifests(bool);
    virtual bool canFlushToDisk()const;
    virtual bool needsTick()const;
    virtual void tick();
    virtual void flushImmediately();
    virtual void enableFlushToDisk(bool);
    virtual void checkCorrupt(bool);
    virtual void getFlushableLevelDbEnvType()const;
    virtual void getTransactionWriteSizeLimit()const;
    virtual void setSaveDataIcon(Core::Path const&);
    virtual void _commit();
    virtual void _onTransactionsEmpty(bool);
    virtual void _onTeardown();

    bool isOutOfDiskSpaceError()const;
//  void notifyCriticalDiskError(Core::LevelStorageState const&); //TODO: incomplete function definition
    void _getFlatFileManifestTracker();
    void getStorageAreaForPath(std::shared_ptr<Core::FileStorageArea> &, Core::Path const&);
    void _getStorageAreaForPathImpl(std::shared_ptr<Core::FileStorageArea> &, Core::Path const&);
    void unloadAllStorageAreaFlatFileManifests(bool);
    void teardown();
//  FileStorageArea(Core::FileAccessType, Core::Path const&, bool, bool, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition
    std::string getRootPath()const;
    void setLoggingEnabled(bool);
    void getAccessType()const;
    void _notifyBeginWrite();
    void _notifyEndWrite();
    void _onWriteFile(Core::Path);
    void _onDeleteFile(Core::Path);
    void _getNumWriteTransactions()const;
    void _getNumAllTransactions()const;
    void _suspendFileIO();
    void _resumeFileIO();
    void _beginTransaction(Core::FileSystemImpl *, bool);
    void _endTransaction(Core::FileSystemImpl *, bool);
    void _addWriteOperation(bool, unsigned long);
    void _addReadOperation(bool, unsigned long);
    void _addReadWriteOperation(bool, unsigned long, unsigned long);
    void getAvailableUserStorageSize();
    void checkUserStorage();
    void getTotalBytesWrittenAndReadFromAllStorageAreas(unsigned long &, unsigned long &);
    void updateFlatFileManifests();
//  void addObserver(Core::FileStorageAreaObserver &); //TODO: incomplete function definition
    bool canWrite()const;
};

}