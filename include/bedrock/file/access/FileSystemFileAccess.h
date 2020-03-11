#pragma once

#include "../../../core/Path.h"
#include "./IFileAccess.h"
#include <string>


class FileSystemFileAccess : IFileAccess {

public:
    virtual ~FileSystemFileAccess();
    virtual void fopen(Core::Path const&, std::string const&);
//  virtual void fclose(void *); //TODO: incomplete function definition
//  virtual void fseek(void *, long, int); //TODO: incomplete function definition
//  virtual void ftell(void *); //TODO: incomplete function definition
    virtual void getReadInterface()const;
    virtual void getWriteInterface();
    virtual void unload();

//  FileSystemFileAccess(FileSystemMode); //TODO: incomplete function definition
};
