#pragma once

#include "../../../unmapped/FileAccessTransforms"
#include "../../../unmapped/StreamDetails"
#include "../../../core/Path"


class MemoryMappedFileAccess : IFileAccess {

public:
    static long EMPTY_TRANSFORMS;

    virtual MemoryMappedFileAccess::~MemoryMappedFileAccess()
    virtual void fopen(Core::Path const&, std::string const&);
    virtual void fclose(void *);
    virtual void fseek(void *, long, int);
    virtual void ftell(void *);
    virtual void getReadInterface()const;
    virtual void getWriteInterface();
    virtual void unload();

    MemoryMappedFileAccess(IFileAccess &, std::unique_ptr<FileAccessTransforms, std::default_delete<FileAccessTransforms>>);
    void _requestedOpenIsCompatibleWithOpenStream(MemoryMappedFileAccess::StreamDetails &, bool, bool)const;
    void _getTransforms()const;
};
