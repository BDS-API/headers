#pragma once

#include <string>
#include "../../../unmapped/FileAccessTransforms.h"
#include "IFileAccess.h"
#include <memory>
#include "IFileWriteAccess.h"
#include "IFileReadAccess.h"
#include "../../../core/Path.h"


class MemoryMappedFileAccess : IFileAccess {

public:
    class MemoryMappedFileReadAccess;
    class MemoryMappedFileWriteAccess;
    class StreamDetails;

    static long EMPTY_TRANSFORMS;

    virtual void fopen(Core::Path const&, std::string const&);
    virtual void fclose(void *);
    virtual void getWriteInterface();
    virtual void fseek(void *, long, int);
    virtual void unload();
    ~MemoryMappedFileAccess();
    virtual void ftell(void *);
    virtual void getReadInterface()const;
    void _getTransforms()const;
    void _requestedOpenIsCompatibleWithOpenStream(MemoryMappedFileAccess::StreamDetails &, bool, bool)const;
    MemoryMappedFileAccess(IFileAccess &, std::unique_ptr<FileAccessTransforms>);
    class MemoryMappedFileReadAccess : IFileReadAccess {

    public:
        virtual void fread(void *, unsigned long, unsigned long, void *)const;
        ~MemoryMappedFileReadAccess();
        MemoryMappedFileReadAccess();
    };
    class MemoryMappedFileWriteAccess : IFileWriteAccess {

    public:
        ~MemoryMappedFileWriteAccess();
        virtual void fwrite(void const*, unsigned long, unsigned long, void *);
        MemoryMappedFileWriteAccess();
    };
    class StreamDetails {

    public:
        StreamDetails(MemoryMappedFileAccess::StreamDetails &&);
        StreamDetails();
        ~StreamDetails();
    };
};
