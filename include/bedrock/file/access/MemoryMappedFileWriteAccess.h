#pragma once



using namespace MemoryMappedFileAccess;

class MemoryMappedFileWriteAccess : IFileWriteAccess {

public:
    MemoryMappedFileAccess::MemoryMappedFileWriteAccess::~MemoryMappedFileWriteAccess()
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);

    MemoryMappedFileWriteAccess(void);
};
