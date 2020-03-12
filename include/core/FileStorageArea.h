#pragma once

#include <string>
#include <memory>
#include "Path.h"
#include <functional>


namespace Core {

    class FileStorageArea {

    public:
        virtual bool canExtendSize()const;
        virtual void getFlushableLevelDbEnvType()const;
        virtual void getTransactionWriteSizeLimit()const;
        virtual void informPendingWriteSize(unsigned long const&, bool);
        virtual void setSaveDataIcon(Core::Path const&);
        virtual void _onTransactionsEmpty(bool);
        ~FileStorageArea();
        virtual void getExtendSizeThreshold(unsigned long &)const;
        virtual void informStorageAreaCopy(unsigned long const&);
        virtual bool supportsExtendSize()const;
        virtual bool canFlushToDisk()const;
        virtual void unloadFlatFileManifests(bool);
        virtual void _commit();
        virtual void preemptiveExtendSize(unsigned long, std::function<void (void)>, std::function<void (void)>);
        virtual void checkCorrupt(bool);
        virtual void notifyChangeInFileSize(long, long);
        virtual void tick();
        virtual void attemptExtendSize(long const&, std::function<void (void)>);
        virtual bool handlesPendingWrites()const;
        virtual void enableFlushToDisk(bool);
        virtual void flushImmediately();
        virtual void resetCanAttemptExtendSize();
        virtual bool needsTick()const;
        virtual void _onTeardown();
        void _getNumAllTransactions()const;
//      void addObserver(Core::FileStorageAreaObserver &); //TODO: incomplete function definition
        void _suspendFileIO();
        void _notifyBeginWrite();
        void getAvailableUserStorageSize();
        bool isOutOfDiskSpaceError()const;
        void _notifyEndWrite();
        void teardown();
        void _getFlatFileManifestTracker();
        void _beginTransaction(Core::FileSystemImpl *, bool);
        void _addReadWriteOperation(bool, unsigned long, unsigned long);
        void _endTransaction(Core::FileSystemImpl *, bool);
        void _getNumWriteTransactions()const;
        void _resumeFileIO();
//      void notifyCriticalDiskError(Core::LevelStorageState const&); //TODO: incomplete function definition
        void getStorageAreaForPath(std::shared_ptr<Core::FileStorageArea> &, Core::Path const&);
        void _addWriteOperation(bool, unsigned long);
        void updateFlatFileManifests();
        void unloadAllStorageAreaFlatFileManifests(bool);
        void _addReadOperation(bool, unsigned long);
        void checkUserStorage();
//      FileStorageArea(Core::FileAccessType, Core::Path const&, bool, bool, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition
        void getAccessType()const;
        std::string getRootPath()const;
        void setLoggingEnabled(bool);
        void getTotalBytesWrittenAndReadFromAllStorageAreas(unsigned long &, unsigned long &);
        bool canWrite()const;
        void _onDeleteFile(Core::Path);
        void _onWriteFile(Core::Path);
        void _getStorageAreaForPathImpl(std::shared_ptr<Core::FileStorageArea> &, Core::Path const&);
    };
}
