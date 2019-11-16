#pragma once

class MemoryMappedFileAccess::MemoryMappedFileWriteAccess : IFileWriteAccess {

    virtual ~MemoryMappedFileWriteAccess();
    virtual ~MemoryMappedFileWriteAccess();
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);
}
