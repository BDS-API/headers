#pragma once

#include <vector>


namespace Core {

    namespace FlatFileOperations {

        void createFlatFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::vector<Core::ExcludedPath> const&, bool); // _ZN4Core18FlatFileOperations14createFlatFileEPNS_14FileSystemImplERKNS_4PathES2_S5_RKSt6vectorINS_12ExcludedPathESaIS7_EEb
        void createFlatFileManifest(Core::FileSystemImpl &, Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&); // _ZN4Core18FlatFileOperations22createFlatFileManifestERNS_14FileSystemImplERKNS_4PathERKSt6vectorINS_20FlatFileManifestInfoESaIS7_EE
        void copyFlatFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&); // _ZN4Core18FlatFileOperations12copyFlatFileEPNS_14FileSystemImplERKNS_4PathES2_S5_RKSt6vectorINS_12ExcludedPathESaIS7_EESB_
        void transferFlatFileDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core18FlatFileOperations25transferFlatFileDirectoryEPNS_14FileSystemImplERKNS_4PathES2_S5_
        void replaceFlatFileManifest(Core::FileSystemImpl &, Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&, bool); // _ZN4Core18FlatFileOperations23replaceFlatFileManifestERNS_14FileSystemImplERKNS_4PathERKSt6vectorINS_20FlatFileManifestInfoESaIS7_EEb
    };
}
