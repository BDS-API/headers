#pragma once

class MemoryMappedFileAccess::MemoryMappedFileReadAccess : IFileReadAccess {

public:
    virtual ~MemoryMappedFileReadAccess();
    virtual void fread(void *, unsigned long, unsigned long, void *)const;

    void MemoryMappedFileReadAccess(void);
};
