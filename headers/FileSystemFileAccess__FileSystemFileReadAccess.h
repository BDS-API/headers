#pragma once

class FileSystemFileAccess::FileSystemFileReadAccess : IFileReadAccess {

public:
    virtual ~FileSystemFileReadAccess();
    virtual void fread(void *, unsigned long, unsigned long, void *)const;

    void FileSystemFileReadAccess(void);
};
