#pragma once

#include "Result.h"
#include "FlatFileManifestTracker.h"
#include "Path.h"
#include "FileStorageArea.h"
#include "FileOpenMode.h"
#include <functional>
#include "FileImpl.h"
#include "FileSystemImpl.h"
#include <memory>
#include "DirectoryIterationItem.h"


namespace Core {

    class FileSystem_generic : Core::FileSystemImpl {

    public:
        virtual void _getFileSize(Core::Path const&, unsigned long *);
        virtual void _renameFileOrDirectory(Core::Path const&, Core::Path const&);
        ~FileSystem_generic();
//      virtual void _getEntryType(Core::Path const&, Core::FileType &); //TODO: incomplete function definition
        virtual void _getLastModificationTime(Core::Path const&, long *);
        virtual void _directoryExists(Core::Path const&);
//      virtual void _openFile(std::unique_ptr<Core::FileImpl> &, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
        virtual void _renameDirectory(Core::Path const&, Core::Path const&);
//      virtual void _iterateOverDirectory(Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition
        virtual void _fileExists(Core::Path const&);
        virtual void _deleteEmptyDirectory(Core::Path const&);
        virtual void _renameFile(Core::Path const&, Core::Path const&);
        virtual void _createOneDirectory(Core::Path const&);
        virtual void _deleteFile(Core::Path const&);
        virtual void _fileOrDirectoryExists(Core::Path const&);
        virtual void _copyTimeAndAccessRights(Core::Path const&, Core::Path const&);
        void _getEntryType(Core::Path const&);
//      FileSystem_generic(Core::FileAccessType, std::shared_ptr<Core::FileStorageArea>, std::shared_ptr<Core::FlatFileManifestTracker>); //TODO: incomplete function definition
    };
}
