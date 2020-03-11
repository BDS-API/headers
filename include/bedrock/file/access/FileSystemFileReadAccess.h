#pragma once

#include "./IFileReadAccess.h"


namespace FileSystemFileAccess {

class FileSystemFileReadAccess : IFileReadAccess {

public:
    virtual ~FileSystemFileReadAccess();
//  virtual void fread(void *, unsigned long, unsigned long, void *)const; //TODO: incomplete function definition

    FileSystemFileReadAccess();
};

}