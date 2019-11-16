#pragma once

class FileSystemFileAccess::FileSystemFileWriteAccess : IFileWriteAccess {

    virtual ~FileSystemFileWriteAccess();
    virtual ~FileSystemFileWriteAccess();
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);
}
