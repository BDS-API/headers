#pragma once

#include "IFileWriteAccess.h"
#include <memory>
#include <string>
#include "IFileAccess.h"
#include "IFileReadAccess.h"


class MemoryMappedFileAccess : IFileAccess {

public:
    class MemoryMappedFileReadAccess;
    class MemoryMappedFileWriteAccess;
    class StreamDetails;

    static long EMPTY_TRANSFORMS;

    virtual void fclose(void *);
    virtual void getWriteInterface();
    virtual void unload();
    ~MemoryMappedFileAccess();
    virtual void fseek(void *, long, int);
    virtual void fopen(Core::Path const&, std::string const&);
    virtual void ftell(void *);
    virtual void getReadInterface()const;
    void _getTransforms()const;
    MemoryMappedFileAccess(IFileAccess &, std::unique_ptr<FileAccessTransforms>);
    void _requestedOpenIsCompatibleWithOpenStream(MemoryMappedFileAccess::StreamDetails &, bool, bool)const;
    class MemoryMappedFileReadAccess : IFileReadAccess {

    public:
        ~MemoryMappedFileReadAccess();
        virtual void fread(void *, unsigned long, unsigned long, void *)const;
        MemoryMappedFileReadAccess();
    };
    class MemoryMappedFileWriteAccess : IFileWriteAccess {

    public:
        virtual void fwrite(void const*, unsigned long, unsigned long, void *);
        ~MemoryMappedFileWriteAccess();
        MemoryMappedFileWriteAccess();
    };
    class StreamDetails {

    public:
        StreamDetails(MemoryMappedFileAccess::StreamDetails &&);
        StreamDetails();
        ~StreamDetails();
    };
};
