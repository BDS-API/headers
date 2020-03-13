#pragma once

#include "Result.h"
#include <vector>
#include <memory>
#include "FileOpenMode.h"
#include <functional>


namespace Core {

    class FlatFileSystemImpl {

    public:
        ~FlatFileSystemImpl(); // _ZN4Core18FlatFileSystemImplD2Ev
        void getFlatFileManifestTracker()const; // _ZNK4Core18FlatFileSystemImpl26getFlatFileManifestTrackerEv
        void createFlatFile(Core::Path const&, Core::Path const&); // _ZN4Core18FlatFileSystemImpl14createFlatFileERKNS_4PathES3_
//      void shouldAccessFlatFile(Core::Path const&, Core::PathBuffer<std::string> &, bool); //TODO: incomplete function definition // _ZN4Core18FlatFileSystemImpl20shouldAccessFlatFileERKNS_4PathERNS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEb
        bool isDirectoryPathAFlatFile(Core::Path const&); // _ZN4Core18FlatFileSystemImpl24isDirectoryPathAFlatFileERKNS_4PathE
        void fileOrDirectoryExists(Core::Path const&, Core::Path const&); // _ZN4Core18FlatFileSystemImpl21fileOrDirectoryExistsERKNS_4PathES3_
        void _findFileOrDirectoryEntry(Core::Path const&, Core::Path const&, bool); // _ZN4Core18FlatFileSystemImpl25_findFileOrDirectoryEntryERKNS_4PathES3_b
        void _getSeekPositionAndSize(Core::Path const&, Core::Path const&, unsigned long &, unsigned long &); // _ZN4Core18FlatFileSystemImpl23_getSeekPositionAndSizeERKNS_4PathES3_RmS4_
        void fileExists(Core::Path const&, Core::Path const&); // _ZN4Core18FlatFileSystemImpl10fileExistsERKNS_4PathES3_
        void directoryExists(Core::Path const&, Core::Path const&); // _ZN4Core18FlatFileSystemImpl15directoryExistsERKNS_4PathES3_
//      void iterateOverDirectory(Core::Path const&, Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition // _ZN4Core18FlatFileSystemImpl20iterateOverDirectoryERKNS_4PathES3_NS_23DirectoryIterationFlagsESt8functionIFNS_6ResultERKNS_22DirectoryIterationItemEEE
        void deleteFileOrDirectory(Core::Path const&, Core::Path const&, bool, bool); // _ZN4Core18FlatFileSystemImpl21deleteFileOrDirectoryERKNS_4PathES3_bb
        void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&); // _ZN4Core18FlatFileSystemImpl12copyFlatFileERKNS_4PathES3_RKSt6vectorINS_12ExcludedPathESaIS5_EES9_
        void _deleteFlatFile(Core::Path const&); // _ZN4Core18FlatFileSystemImpl15_deleteFlatFileERKNS_4PathE
//      void openFlatFile(std::unique_ptr<Core::FileImpl> &, Core::Path const&, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition // _ZN4Core18FlatFileSystemImpl12openFlatFileERSt10unique_ptrINS_8FileImplESt14default_deleteIS2_EERKNS_4PathES9_NS_12FileOpenModeENS_17FileBufferingModeE
        void getFileSize(Core::Path const&, Core::Path const&, unsigned long *); // _ZN4Core18FlatFileSystemImpl11getFileSizeERKNS_4PathES3_Pm
        FlatFileSystemImpl(Core::FileSystemImpl &, std::shared_ptr<Core::FlatFileManifestTracker>); // _ZN4Core18FlatFileSystemImplC2ERNS_14FileSystemImplESt10shared_ptrINS_23FlatFileManifestTrackerEE
    };
}
