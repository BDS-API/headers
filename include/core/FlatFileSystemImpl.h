#pragma once



using namespace Core;

class FlatFileSystemImpl {

public:

    void getFlatFileManifestTracker()const;
    void createFlatFile(Core::Path const&, Core::Path const&);
    void shouldAccessFlatFile(Core::Path const&, Core::PathBuffer<std::string> &, bool);
    bool isDirectoryPathAFlatFile(Core::Path const&);
    void fileOrDirectoryExists(Core::Path const&, Core::Path const&);
    void _findFileOrDirectoryEntry(Core::Path const&, Core::Path const&, bool);
    void _getSeekPositionAndSize(Core::Path const&, Core::Path const&, unsigned long &, unsigned long &);
    void fileExists(Core::Path const&, Core::Path const&);
    void directoryExists(Core::Path const&, Core::Path const&);
    void iterateOverDirectory(Core::Path const&, Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result ()(Core::DirectoryIterationItem const&)>);
    void deleteFileOrDirectory(Core::Path const&, Core::Path const&, bool, bool);
    void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&);
    void _deleteFlatFile(Core::Path const&);
    void openFlatFile(std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>> &, Core::Path const&, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode);
    void getFileSize(Core::Path const&, Core::Path const&, unsigned long *);
    FlatFileSystemImpl(Core::FileSystemImpl &, std::shared_ptr<Core::FlatFileManifestTracker>);
};
