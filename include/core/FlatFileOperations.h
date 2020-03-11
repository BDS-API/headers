#pragma once

#include "./ExcludedPath.h"
#include "./FlatFileManifestInfo.h"
#include <memory>
#include <vector>
#include "./FileSystemImpl.h"
#include "./Path.h"


namespace Core {

class FlatFileOperations {

public:

    void createFlatFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&, bool);
    void createFlatFileManifest(Core::FileSystemImpl &, Core::Path const&, std::vector<Core::FlatFileManifestInfo, std::allocator<Core::FlatFileManifestInfo>> const&);
    void copyFlatFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&);
    void transferFlatFileDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
    void replaceFlatFileManifest(Core::FileSystemImpl &, Core::Path const&, std::vector<Core::FlatFileManifestInfo, std::allocator<Core::FlatFileManifestInfo>> const&, bool);
};

}