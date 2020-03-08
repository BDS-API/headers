#pragma once



using namespace FileSystemFileAccess;

class FileSystemFileWriteAccess : IFileWriteAccess {

public:
    virtual FileSystemFileAccess::FileSystemFileWriteAccess::~FileSystemFileWriteAccess()
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);

    FileSystemFileWriteAccess(void);
};
