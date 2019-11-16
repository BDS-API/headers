#pragma once

class FileSystemFileAccess::FileSystemFileReadAccess : IFileReadAccess {

    virtual ~FileSystemFileReadAccess();
    virtual ~FileSystemFileReadAccess();
    virtual void fread(void *, unsigned long, unsigned long, void *)const;
}
