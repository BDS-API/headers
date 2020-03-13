#pragma once



namespace Core {

    class FileStats {

    public:
        FileStats(); // _ZN4Core9FileStatsC2Ev
        void clear(); // _ZN4Core9FileStats5clearEv
        void getNumSuccessfulWriteOperations()const; // _ZNK4Core9FileStats31getNumSuccessfulWriteOperationsEv
        void getNumFailedWriteOperations()const; // _ZNK4Core9FileStats27getNumFailedWriteOperationsEv
        void getNumBytesWritten()const; // _ZNK4Core9FileStats18getNumBytesWrittenEv
        void getNumSuccessfulReadOperations()const; // _ZNK4Core9FileStats30getNumSuccessfulReadOperationsEv
        void getNumFailedReadOperations()const; // _ZNK4Core9FileStats26getNumFailedReadOperationsEv
        void getNumBytesRead()const; // _ZNK4Core9FileStats15getNumBytesReadEv
        void addWriteOperation(bool, unsigned long); // _ZN4Core9FileStats17addWriteOperationEbm
        void addReadOperation(bool, unsigned long); // _ZN4Core9FileStats16addReadOperationEbm
        void addReadWriteOperation(bool, unsigned long, unsigned long); // _ZN4Core9FileStats21addReadWriteOperationEbmm
        void setFileSystemUsedSize(long, long); // _ZN4Core9FileStats21setFileSystemUsedSizeEll
        void notifyChangeInFileSize(long, long); // _ZN4Core9FileStats22notifyChangeInFileSizeEll
        void getUsedFileSystemSize()const; // _ZNK4Core9FileStats21getUsedFileSystemSizeEv
        void getAllocatedUsedFileSystemSize()const; // _ZNK4Core9FileStats30getAllocatedUsedFileSystemSizeEv
    };
}
