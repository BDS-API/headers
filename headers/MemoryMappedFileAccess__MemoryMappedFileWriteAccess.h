#pragma once

class MemoryMappedFileAccess::MemoryMappedFileWriteAccess : IFileWriteAccess {

    virtual void ~MemoryMappedFileWriteAccess();
    virtual void ~MemoryMappedFileWriteAccess();
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);
}
