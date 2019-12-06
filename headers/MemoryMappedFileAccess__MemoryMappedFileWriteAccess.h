#pragma once

class MemoryMappedFileAccess::MemoryMappedFileWriteAccess : IFileWriteAccess {

public:
    virtual ~MemoryMappedFileWriteAccess();
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);

    void MemoryMappedFileWriteAccess(void);
};
