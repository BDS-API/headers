#pragma once

class MemoryMappedFileAccess::MemoryMappedFileReadAccess : IFileReadAccess {

    virtual void ~MemoryMappedFileReadAccess();
    virtual void ~MemoryMappedFileReadAccess();
    virtual void fread(void *, unsigned long, unsigned long, void *)const;
}
