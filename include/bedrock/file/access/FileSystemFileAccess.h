#pragma once

#include <string>
#include "IFileAccess.h"
#include "IFileWriteAccess.h"
#include "IFileReadAccess.h"
#include "../../../core/Path.h"


class FileSystemFileAccess : IFileAccess {

public:
    class FileSystemFileReadAccess;
    class FileSystemFileWriteAccess;

    virtual void fseek(void *, long, int);
    ~FileSystemFileAccess();
    virtual void ftell(void *);
    virtual void getReadInterface()const;
    virtual void unload();
    virtual void fopen(Core::Path const&, std::string const&);
    virtual void fclose(void *);
    virtual void getWriteInterface();
//  FileSystemFileAccess(FileSystemMode); //TODO: incomplete function definition
    class FileSystemFileReadAccess : IFileReadAccess {

    public:
        virtual void fread(void *, unsigned long, unsigned long, void *)const;
        ~FileSystemFileReadAccess();
        FileSystemFileReadAccess();
    };
    class FileSystemFileWriteAccess : IFileWriteAccess {

    public:
        ~FileSystemFileWriteAccess();
        virtual void fwrite(void const*, unsigned long, unsigned long, void *);
        FileSystemFileWriteAccess();
    };
};
