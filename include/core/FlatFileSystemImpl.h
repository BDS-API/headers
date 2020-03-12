#pragma once

#include "Result.h"
#include <string>
#include "FlatFileManifestTracker.h"
#include "ExcludedPath.h"
#include "Path.h"
#include "FileOpenMode.h"
#include <functional>
#include "FileImpl.h"
#include "FileSystemImpl.h"
#include <memory>
#include <vector>
#include "DirectoryIterationItem.h"


namespace Core {

    class FlatFileSystemImpl {

    public:
//      void openFlatFile(std::unique_ptr<Core::FileImpl> &, Core::Path const&, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
        void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);
        void getFileSize(Core::Path const&, Core::Path const&, unsigned long *);
        ~FlatFileSystemImpl();
        void _getSeekPositionAndSize(Core::Path const&, Core::Path const&, unsigned long &, unsigned long &);
//      void iterateOverDirectory(Core::Path const&, Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition
        void _findFileOrDirectoryEntry(Core::Path const&, Core::Path const&, bool);
        void fileOrDirectoryExists(Core::Path const&, Core::Path const&);
        void deleteFileOrDirectory(Core::Path const&, Core::Path const&, bool, bool);
//      void shouldAccessFlatFile(Core::Path const&, Core::PathBuffer<std::string> &, bool); //TODO: incomplete function definition
        void directoryExists(Core::Path const&, Core::Path const&);
        void getFlatFileManifestTracker()const;
        void fileExists(Core::Path const&, Core::Path const&);
        void _deleteFlatFile(Core::Path const&);
        FlatFileSystemImpl(Core::FileSystemImpl &, std::shared_ptr<Core::FlatFileManifestTracker>);
        bool isDirectoryPathAFlatFile(Core::Path const&);
        void createFlatFile(Core::Path const&, Core::Path const&);
    };
}
