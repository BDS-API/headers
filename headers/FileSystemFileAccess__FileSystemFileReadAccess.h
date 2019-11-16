#pragma once

class FileSystemFileAccess::FileSystemFileReadAccess : IFileReadAccess {

    virtual void ~FileSystemFileReadAccess();
    virtual void ~FileSystemFileReadAccess();
    virtual void fread(void *, unsigned long, unsigned long, void *)const;
}
