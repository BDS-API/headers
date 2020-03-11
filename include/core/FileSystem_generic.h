#pragma once

#include "./FlatFileManifestTracker.h"
#include "./FileOpenMode.h"
#include <memory>
#include "./FileImpl.h"
#include "./FileStorageArea.h"
#include "./DirectoryIterationItem.h"
#include "./FileSystemImpl.h"
#include "./Result.h"
#include <functional>
#include "./Path.h"


namespace Core {

class FileSystem_generic : Core::FileSystemImpl {

public:
    virtual ~FileSystem_generic();
//  virtual void _openFile(std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>> &, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
    virtual void _fileExists(Core::Path const&);
    virtual void _deleteFile(Core::Path const&);
    virtual void _getFileSize(Core::Path const&, unsigned long *);
    virtual void _renameFile(Core::Path const&, Core::Path const&);
    virtual void _createOneDirectory(Core::Path const&);
    virtual void _directoryExists(Core::Path const&);
    virtual void _deleteEmptyDirectory(Core::Path const&);
    virtual void _renameDirectory(Core::Path const&, Core::Path const&);
//  virtual void _iterateOverDirectory(Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition
    virtual void _fileOrDirectoryExists(Core::Path const&);
    virtual void _renameFileOrDirectory(Core::Path const&, Core::Path const&);
//  virtual void _getEntryType(Core::Path const&, Core::FileType &); //TODO: incomplete function definition
    virtual void _getLastModificationTime(Core::Path const&, long *);
    virtual void _copyTimeAndAccessRights(Core::Path const&, Core::Path const&);

//  FileSystem_generic(Core::FileAccessType, std::shared_ptr<Core::FileStorageArea>, std::shared_ptr<Core::FlatFileManifestTracker>); //TODO: incomplete function definition
    void _getEntryType(Core::Path const&);
};

}