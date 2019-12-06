#pragma once

class FileSystemFileAccess::FileSystemFileWriteAccess : IFileWriteAccess {

public:
    virtual ~FileSystemFileWriteAccess();
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);

    void FileSystemFileWriteAccess(void);
};
