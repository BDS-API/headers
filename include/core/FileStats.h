#pragma once



using namespace Core;

class FileStats {

public:

    FileStats(void);
    void clear();
    void getNumSuccessfulWriteOperations()const;
    void getNumFailedWriteOperations()const;
    void getNumBytesWritten()const;
    void getNumSuccessfulReadOperations()const;
    void getNumFailedReadOperations()const;
    void getNumBytesRead()const;
    void addWriteOperation(bool, unsigned long);
    void addReadOperation(bool, unsigned long);
    void addReadWriteOperation(bool, unsigned long, unsigned long);
    void setFileSystemUsedSize(long, long);
    void notifyChangeInFileSize(long, long);
    void getUsedFileSystemSize()const;
    void getAllocatedUsedFileSystemSize()const;
};
