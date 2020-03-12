#pragma once

#include <functional>
#include "Path.h"
#include "FileSystemImpl.h"
#include <memory>


namespace Core {

    class FileStorageArea {

    public:
        virtual void getFlushableLevelDbEnvType()const;
        virtual void checkCorrupt(bool);
        virtual void unloadFlatFileManifests(bool);
        virtual bool canFlushToDisk()const;
        virtual void attemptExtendSize(long const&, std::function<void (void)>);
        virtual void enableFlushToDisk(bool);
        virtual void tick();
        virtual void informPendingWriteSize(unsigned long const&, bool);
        virtual void _commit();
        virtual void preemptiveExtendSize(unsigned long, std::function<void (void)>, std::function<void (void)>);
        ~FileStorageArea();
        virtual void _onTeardown();
        virtual bool supportsExtendSize()const;
        virtual bool canExtendSize()const;
        virtual void getExtendSizeThreshold(unsigned long &)const;
        virtual void resetCanAttemptExtendSize();
        virtual void setSaveDataIcon(Core::Path const&);
        virtual void flushImmediately();
        virtual bool handlesPendingWrites()const;
        virtual void informStorageAreaCopy(unsigned long const&);
        virtual bool needsTick()const;
        virtual void _onTransactionsEmpty(bool);
        virtual void getTransactionWriteSizeLimit()const;
        virtual void notifyChangeInFileSize(long, long);
        void _notifyBeginWrite();
        void _beginTransaction(Core::FileSystemImpl *, bool);
        void _getStorageAreaForPathImpl(std::shared_ptr<Core::FileStorageArea> &, Core::Path const&);
        void _addWriteOperation(bool, unsigned long);
        void getTotalBytesWrittenAndReadFromAllStorageAreas(unsigned long &, unsigned long &);
        void getAvailableUserStorageSize();
        void updateFlatFileManifests();
        void _getNumAllTransactions()const;
        void checkUserStorage();
        void _onWriteFile(Core::Path);
        void _resumeFileIO();
        void _endTransaction(Core::FileSystemImpl *, bool);
        void _suspendFileIO();
        void teardown();
        void _addReadWriteOperation(bool, unsigned long, unsigned long);
//      void addObserver(Core::FileStorageAreaObserver &); //TODO: incomplete function definition
        void unloadAllStorageAreaFlatFileManifests(bool);
        void getAccessType()const;
        std::string getRootPath()const;
        void _getFlatFileManifestTracker();
        void _getNumWriteTransactions()const;
        bool isOutOfDiskSpaceError()const;
        void _onDeleteFile(Core::Path);
        void getStorageAreaForPath(std::shared_ptr<Core::FileStorageArea> &, Core::Path const&);
        void _notifyEndWrite();
//      FileStorageArea(Core::FileAccessType, Core::Path const&, bool, bool, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition
        void setLoggingEnabled(bool);
        void _addReadOperation(bool, unsigned long);
//      void notifyCriticalDiskError(Core::LevelStorageState const&); //TODO: incomplete function definition
        bool canWrite()const;
    };
}
