#pragma once



namespace Core {

    class FileStats {

    public:
        void getNumSuccessfulWriteOperations()const;
        void getNumSuccessfulReadOperations()const;
        void getNumFailedReadOperations()const;
        void addReadOperation(bool, unsigned long);
        void getUsedFileSystemSize()const;
        void setFileSystemUsedSize(long, long);
        void getNumFailedWriteOperations()const;
        void getAllocatedUsedFileSystemSize()const;
        void getNumBytesWritten()const;
        void getNumBytesRead()const;
        void clear();
        void addReadWriteOperation(bool, unsigned long, unsigned long);
        void addWriteOperation(bool, unsigned long);
        FileStats();
        void notifyChangeInFileSize(long, long);
    };
}
