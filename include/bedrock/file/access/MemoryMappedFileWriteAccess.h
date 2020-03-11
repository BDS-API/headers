#pragma once

#include "./IFileWriteAccess.h"


namespace MemoryMappedFileAccess {

class MemoryMappedFileWriteAccess : IFileWriteAccess {

public:
    virtual ~MemoryMappedFileWriteAccess();
//  virtual void fwrite(void const*, unsigned long, unsigned long, void *); //TODO: incomplete function definition

    MemoryMappedFileWriteAccess();
};

}