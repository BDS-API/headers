#pragma once

using namespace FileSystemFileAccess;

class FileSystemFileReadAccess : IFileReadAccess {

public:
    virtual void FileSystemFileAccess::FileSystemFileReadAccess::~FileSystemFileReadAccess();
    virtual void fread(void *, unsigned long, unsigned long, void *)const;

    FileSystemFileReadAccess(void);
};