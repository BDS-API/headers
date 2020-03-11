#pragma once

#include "../../../unmapped/FileAccessTransforms.h"
#include "../../../core/Path.h"
#include <memory>
#include "./IFileAccess.h"
#include "../../../unmapped/StreamDetails.h"
#include <string>


class MemoryMappedFileAccess : IFileAccess {

public:
    static long EMPTY_TRANSFORMS;

    virtual ~MemoryMappedFileAccess();
    virtual void fopen(Core::Path const&, std::string const&);
//  virtual void fclose(void *); //TODO: incomplete function definition
//  virtual void fseek(void *, long, int); //TODO: incomplete function definition
//  virtual void ftell(void *); //TODO: incomplete function definition
    virtual void getReadInterface()const;
    virtual void getWriteInterface();
    virtual void unload();

    MemoryMappedFileAccess(IFileAccess &, std::unique_ptr<FileAccessTransforms, std::default_delete<FileAccessTransforms>>);
    void _requestedOpenIsCompatibleWithOpenStream(MemoryMappedFileAccess::StreamDetails &, bool, bool)const;
    void _getTransforms()const;
};
