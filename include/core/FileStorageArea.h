#pragma once

#include <string>
#include <memory>
#include <functional>
#include "Path.h"


namespace Core {

    class FileStorageArea {

    public:
        ~FileStorageArea(); // _ZN4Core15FileStorageAreaD2Ev
        virtual void notifyChangeInFileSize(long, long); // _ZN4Core15FileStorageArea22notifyChangeInFileSizeEll
        virtual bool handlesPendingWrites()const; // _ZNK4Core15FileStorageArea20handlesPendingWritesEv
        virtual void informPendingWriteSize(unsigned long const&, bool); // _ZN4Core15FileStorageArea22informPendingWriteSizeERKmb
        virtual void informStorageAreaCopy(unsigned long const&); // _ZN4Core15FileStorageArea21informStorageAreaCopyERKm
        virtual bool supportsExtendSize()const; // _ZNK4Core15FileStorageArea18supportsExtendSizeEv
        virtual bool canExtendSize()const; // _ZNK4Core15FileStorageArea13canExtendSizeEv
        virtual void resetCanAttemptExtendSize(); // _ZN4Core15FileStorageArea25resetCanAttemptExtendSizeEv
        virtual void getExtendSizeThreshold(unsigned long &)const; // _ZNK4Core15FileStorageArea22getExtendSizeThresholdERm
        virtual void attemptExtendSize(long const&, std::function<void (void)>); // _ZN4Core15FileStorageArea17attemptExtendSizeERKlSt8functionIFvvEE
        virtual void preemptiveExtendSize(unsigned long, std::function<void (void)>, std::function<void (void)>); // _ZN4Core15FileStorageArea20preemptiveExtendSizeEmSt8functionIFvvEES3_
        virtual void unloadFlatFileManifests(bool); // _ZN4Core15FileStorageArea23unloadFlatFileManifestsEb
        virtual bool canFlushToDisk()const; // _ZNK4Core15FileStorageArea14canFlushToDiskEv
        virtual bool needsTick()const; // _ZNK4Core15FileStorageArea9needsTickEv
        virtual void tick(); // _ZN4Core15FileStorageArea4tickEv
        virtual void flushImmediately(); // _ZN4Core15FileStorageArea16flushImmediatelyEv
        virtual void enableFlushToDisk(bool); // _ZN4Core15FileStorageArea17enableFlushToDiskEb
        virtual void checkCorrupt(bool); // _ZN4Core15FileStorageArea12checkCorruptEb
        virtual void getFlushableLevelDbEnvType()const; // _ZNK4Core15FileStorageArea26getFlushableLevelDbEnvTypeEv
        virtual void getTransactionWriteSizeLimit()const; // _ZNK4Core15FileStorageArea28getTransactionWriteSizeLimitEv
        virtual void setSaveDataIcon(Core::Path const&); // _ZN4Core15FileStorageArea15setSaveDataIconERKNS_4PathE
        virtual void _commit(); // _ZN4Core15FileStorageArea7_commitEv
        virtual void _onTransactionsEmpty(bool); // _ZN4Core15FileStorageArea20_onTransactionsEmptyEb
        virtual void _onTeardown(); // _ZN4Core15FileStorageArea11_onTeardownEv
        bool isOutOfDiskSpaceError()const; // _ZNK4Core15FileStorageArea21isOutOfDiskSpaceErrorEv
//      void notifyCriticalDiskError(Core::LevelStorageState const&); //TODO: incomplete function definition // _ZN4Core15FileStorageArea23notifyCriticalDiskErrorERKNS_17LevelStorageStateE
        void _getFlatFileManifestTracker(); // _ZN4Core15FileStorageArea27_getFlatFileManifestTrackerEv
        void getStorageAreaForPath(std::shared_ptr<Core::FileStorageArea> &, Core::Path const&); // _ZN4Core15FileStorageArea21getStorageAreaForPathERSt10shared_ptrIS0_ERKNS_4PathE
        void _getStorageAreaForPathImpl(std::shared_ptr<Core::FileStorageArea> &, Core::Path const&); // _ZN4Core15FileStorageArea26_getStorageAreaForPathImplERSt10shared_ptrIS0_ERKNS_4PathE
        void unloadAllStorageAreaFlatFileManifests(bool); // _ZN4Core15FileStorageArea37unloadAllStorageAreaFlatFileManifestsEb
        void teardown(); // _ZN4Core15FileStorageArea8teardownEv
//      FileStorageArea(Core::FileAccessType, Core::Path const&, bool, bool, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition // _ZN4Core15FileStorageAreaC2ENS_14FileAccessTypeERKNS_4PathEbbSt10shared_ptrIS0_E
        std::string getRootPath()const; // _ZNK4Core15FileStorageArea11getRootPathB5cxx11Ev
        void setLoggingEnabled(bool); // _ZN4Core15FileStorageArea17setLoggingEnabledEb
        void getAccessType()const; // _ZNK4Core15FileStorageArea13getAccessTypeEv
        void _notifyBeginWrite(); // _ZN4Core15FileStorageArea17_notifyBeginWriteEv
        void _notifyEndWrite(); // _ZN4Core15FileStorageArea15_notifyEndWriteEv
        void _onWriteFile(Core::Path); // _ZN4Core15FileStorageArea12_onWriteFileENS_4PathE
        void _onDeleteFile(Core::Path); // _ZN4Core15FileStorageArea13_onDeleteFileENS_4PathE
        void _getNumWriteTransactions()const; // _ZNK4Core15FileStorageArea24_getNumWriteTransactionsEv
        void _getNumAllTransactions()const; // _ZNK4Core15FileStorageArea22_getNumAllTransactionsEv
        void _suspendFileIO(); // _ZN4Core15FileStorageArea14_suspendFileIOEv
        void _resumeFileIO(); // _ZN4Core15FileStorageArea13_resumeFileIOEv
        void _beginTransaction(Core::FileSystemImpl *, bool); // _ZN4Core15FileStorageArea17_beginTransactionEPNS_14FileSystemImplEb
        void _endTransaction(Core::FileSystemImpl *, bool); // _ZN4Core15FileStorageArea15_endTransactionEPNS_14FileSystemImplEb
        void _addWriteOperation(bool, unsigned long); // _ZN4Core15FileStorageArea18_addWriteOperationEbm
        void _addReadOperation(bool, unsigned long); // _ZN4Core15FileStorageArea17_addReadOperationEbm
        void _addReadWriteOperation(bool, unsigned long, unsigned long); // _ZN4Core15FileStorageArea22_addReadWriteOperationEbmm
        void getAvailableUserStorageSize(); // _ZN4Core15FileStorageArea27getAvailableUserStorageSizeEv
        void checkUserStorage(); // _ZN4Core15FileStorageArea16checkUserStorageEv
        void getTotalBytesWrittenAndReadFromAllStorageAreas(unsigned long &, unsigned long &); // _ZN4Core15FileStorageArea46getTotalBytesWrittenAndReadFromAllStorageAreasERmS1_
        void updateFlatFileManifests(); // _ZN4Core15FileStorageArea23updateFlatFileManifestsEv
//      void addObserver(Core::FileStorageAreaObserver &); //TODO: incomplete function definition // _ZN4Core15FileStorageArea11addObserverERNS_23FileStorageAreaObserverE
        bool canWrite()const; // _ZNK4Core15FileStorageArea8canWriteEv
    };
}
