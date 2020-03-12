#pragma once



namespace Core {

    class FileStats {

    public:
        void getAllocatedUsedFileSystemSize()const;
        void addReadOperation(bool, unsigned long);
        void getNumFailedWriteOperations()const;
        void setFileSystemUsedSize(long, long);
        void getNumBytesWritten()const;
        void getNumFailedReadOperations()const;
        FileStats();
        void getNumBytesRead()const;
        void getNumSuccessfulReadOperations()const;
        void addReadWriteOperation(bool, unsigned long, unsigned long);
        void addWriteOperation(bool, unsigned long);
        void notifyChangeInFileSize(long, long);
        void clear();
        void getUsedFileSystemSize()const;
        void getNumSuccessfulWriteOperations()const;
    };
}
