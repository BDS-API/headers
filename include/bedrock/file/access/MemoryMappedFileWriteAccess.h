#pragma once



using namespace MemoryMappedFileAccess;

class MemoryMappedFileWriteAccess : IFileWriteAccess {

public:
    virtual void MemoryMappedFileAccess::MemoryMappedFileWriteAccess::~MemoryMappedFileWriteAccess();
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);

    MemoryMappedFileWriteAccess(void);
};
