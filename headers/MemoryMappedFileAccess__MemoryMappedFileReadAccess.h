#pragma once

class MemoryMappedFileAccess::MemoryMappedFileReadAccess : IFileReadAccess {

    virtual ~MemoryMappedFileReadAccess();
    virtual ~MemoryMappedFileReadAccess();
    virtual void fread(void *, unsigned long, unsigned long, void *)const;
}
