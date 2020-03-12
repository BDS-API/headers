#pragma once

#include <memory>
#include <vector>
#include "FileOpenMode.h"
#include "Result.h"
#include <functional>


namespace Core {

    class FlatFileSystemImpl {

    public:
        void fileOrDirectoryExists(Core::Path const&, Core::Path const&);
        ~FlatFileSystemImpl();
        void getFlatFileManifestTracker()const;
//      void shouldAccessFlatFile(Core::Path const&, Core::PathBuffer<std::string> &, bool); //TODO: incomplete function definition
        void createFlatFile(Core::Path const&, Core::Path const&);
        void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);
        void _deleteFlatFile(Core::Path const&);
        void _findFileOrDirectoryEntry(Core::Path const&, Core::Path const&, bool);
        void fileExists(Core::Path const&, Core::Path const&);
//      void openFlatFile(std::unique_ptr<Core::FileImpl> &, Core::Path const&, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
        void _getSeekPositionAndSize(Core::Path const&, Core::Path const&, unsigned long &, unsigned long &);
        void deleteFileOrDirectory(Core::Path const&, Core::Path const&, bool, bool);
        FlatFileSystemImpl(Core::FileSystemImpl &, std::shared_ptr<Core::FlatFileManifestTracker>);
//      void iterateOverDirectory(Core::Path const&, Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition
        void directoryExists(Core::Path const&, Core::Path const&);
        void getFileSize(Core::Path const&, Core::Path const&, unsigned long *);
        bool isDirectoryPathAFlatFile(Core::Path const&);
    };
}
