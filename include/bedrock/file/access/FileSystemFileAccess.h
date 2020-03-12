#pragma once

#include <string>
#include "IFileReadAccess.h"
#include "IFileAccess.h"
#include "IFileWriteAccess.h"


class FileSystemFileAccess : IFileAccess {

public:
    class FileSystemFileReadAccess;
    class FileSystemFileWriteAccess;

    virtual void getWriteInterface();
    virtual void fclose(void *);
    ~FileSystemFileAccess();
    virtual void unload();
    virtual void ftell(void *);
    virtual void fseek(void *, long, int);
    virtual void fopen(Core::Path const&, std::string const&);
    virtual void getReadInterface()const;
//  FileSystemFileAccess(FileSystemMode); //TODO: incomplete function definition
    class FileSystemFileReadAccess : IFileReadAccess {

    public:
        ~FileSystemFileReadAccess();
        virtual void fread(void *, unsigned long, unsigned long, void *)const;
        FileSystemFileReadAccess();
    };
    class FileSystemFileWriteAccess : IFileWriteAccess {

    public:
        ~FileSystemFileWriteAccess();
        virtual void fwrite(void const*, unsigned long, unsigned long, void *);
        FileSystemFileWriteAccess();
    };
};
