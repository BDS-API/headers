#pragma once

class FileSystemFileAccess::FileSystemFileWriteAccess : IFileWriteAccess {

    virtual void ~FileSystemFileWriteAccess();
    virtual void ~FileSystemFileWriteAccess();
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);
}
