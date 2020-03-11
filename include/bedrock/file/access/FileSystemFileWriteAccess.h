#pragma once

#include "./IFileWriteAccess.h"


namespace FileSystemFileAccess {

class FileSystemFileWriteAccess : IFileWriteAccess {

public:
    virtual ~FileSystemFileWriteAccess();
//  virtual void fwrite(void const*, unsigned long, unsigned long, void *); //TODO: incomplete function definition

    FileSystemFileWriteAccess();
};

}