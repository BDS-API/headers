#pragma once

#include "./FlatFileManifestTracker.h"
#include "./ExcludedPath.h"
#include "./FileOpenMode.h"
#include <memory>
#include "./FileImpl.h"
#include "./DirectoryIterationItem.h"
#include <vector>
#include "./FileSystemImpl.h"
#include "./Result.h"
#include <functional>
#include "./Path.h"
#include <string>


namespace Core {

class FlatFileSystemImpl {

public:

    ~FlatFileSystemImpl();
    void getFlatFileManifestTracker()const;
    void createFlatFile(Core::Path const&, Core::Path const&);
//  void shouldAccessFlatFile(Core::Path const&, Core::PathBuffer<std::string> &, bool); //TODO: incomplete function definition
    bool isDirectoryPathAFlatFile(Core::Path const&);
    void fileOrDirectoryExists(Core::Path const&, Core::Path const&);
    void _findFileOrDirectoryEntry(Core::Path const&, Core::Path const&, bool);
    void _getSeekPositionAndSize(Core::Path const&, Core::Path const&, unsigned long &, unsigned long &);
    void fileExists(Core::Path const&, Core::Path const&);
    void directoryExists(Core::Path const&, Core::Path const&);
//  void iterateOverDirectory(Core::Path const&, Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition
    void deleteFileOrDirectory(Core::Path const&, Core::Path const&, bool, bool);
    void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&);
    void _deleteFlatFile(Core::Path const&);
//  void openFlatFile(std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>> &, Core::Path const&, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
    void getFileSize(Core::Path const&, Core::Path const&, unsigned long *);
    FlatFileSystemImpl(Core::FileSystemImpl &, std::shared_ptr<Core::FlatFileManifestTracker>);
};

}