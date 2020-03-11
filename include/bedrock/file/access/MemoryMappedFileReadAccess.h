#pragma once

#include "./IFileReadAccess.h"


namespace MemoryMappedFileAccess {

class MemoryMappedFileReadAccess : IFileReadAccess {

public:
    virtual ~MemoryMappedFileReadAccess();
//  virtual void fread(void *, unsigned long, unsigned long, void *)const; //TODO: incomplete function definition

    MemoryMappedFileReadAccess();
};

}