#pragma once

#include "ExcludedPath.h"
#include "Path.h"
#include <vector>
#include "FileSystemImpl.h"
#include "FlatFileManifestInfo.h"


namespace Core {

    namespace FlatFileOperations {

        void replaceFlatFileManifest(Core::FileSystemImpl &, Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&, bool);
        void copyFlatFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);
        void createFlatFileManifest(Core::FileSystemImpl &, Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&);
        void transferFlatFileDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
        void createFlatFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::vector<Core::ExcludedPath> const&, bool);
    };
}
