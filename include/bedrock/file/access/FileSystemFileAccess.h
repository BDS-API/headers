#pragma once

#include "../../../core/Path"


class FileSystemFileAccess : IFileAccess {

public:
    virtual FileSystemFileAccess::~FileSystemFileAccess()
    virtual void fopen(Core::Path const&, std::string const&);
    virtual void fclose(void *);
    virtual void fseek(void *, long, int);
    virtual void ftell(void *);
    virtual void getReadInterface()const;
    virtual void getWriteInterface();
    virtual void unload();

    FileSystemFileAccess(FileSystemMode);
};
