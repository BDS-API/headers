#pragma once

using namespace MemoryMappedFileAccess;

class MemoryMappedFileReadAccess : IFileReadAccess {

public:
    virtual void MemoryMappedFileAccess::MemoryMappedFileReadAccess::~MemoryMappedFileReadAccess();
    virtual void fread(void *, unsigned long, unsigned long, void *)const;

    MemoryMappedFileReadAccess(void);
};
