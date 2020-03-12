#pragma once

#include <vector>


namespace Core {

    namespace FlatFileOperations {

        void transferFlatFileDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
        void copyFlatFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);
        void createFlatFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::vector<Core::ExcludedPath> const&, bool);
        void createFlatFileManifest(Core::FileSystemImpl &, Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&);
        void replaceFlatFileManifest(Core::FileSystemImpl &, Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&, bool);
    };
}
