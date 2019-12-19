#pragma once

class MemoryMappedFileAccess : IFileAccess {

public:
    static long EMPTY_TRANSFORMS;

    virtual MemoryMappedFileAccess::~MemoryMappedFileAccess();
    virtual void fopen(Core::Path const&, std::string const&);
    virtual void fclose(void *);
    virtual void fseek(void *, long, int);
    virtual void ftell(void *);
    virtual void getReadInterface(void)const;
    virtual void getWriteInterface(void);
    virtual void unload(void);

    MemoryMappedFileAccess(IFileAccess &, std::unique_ptr<FileAccessTransforms, std::default_delete<FileAccessTransforms>>);
    void _requestedOpenIsCompatibleWithOpenStream(MemoryMappedFileAccess::StreamDetails &, bool, bool)const;
    void _getTransforms(void)const;
};
