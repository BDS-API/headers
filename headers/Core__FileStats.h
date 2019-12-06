#pragma once

class Core::FileStats {

public:

    void FileStats(void);
    void clear(void);
    void getNumSuccessfulWriteOperations(void)const;
    void getNumFailedWriteOperations(void)const;
    void getNumBytesWritten(void)const;
    void getNumSuccessfulReadOperations(void)const;
    void getNumFailedReadOperations(void)const;
    void getNumBytesRead(void)const;
    void addWriteOperation(bool, unsigned long);
    void addReadOperation(bool, unsigned long);
    void addReadWriteOperation(bool, unsigned long, unsigned long);
    void setFileSystemUsedSize(long, long);
    void notifyChangeInFileSize(long, long);
    void getUsedFileSystemSize(void)const;
    void getAllocatedUsedFileSystemSize(void)const;
};
