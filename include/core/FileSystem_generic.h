#pragma once

#include "Result.h"
#include "FileSystemImpl.h"
#include <memory>
#include "FileOpenMode.h"
#include <functional>


namespace Core {

    class FileSystem_generic : Core::FileSystemImpl {

    public:
        ~FileSystem_generic(); // _ZN4Core18FileSystem_genericD2Ev
//      virtual void _openFile(std::unique_ptr<Core::FileImpl> &, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition // _ZN4Core18FileSystem_generic9_openFileERSt10unique_ptrINS_8FileImplESt14default_deleteIS2_EERKNS_4PathENS_12FileOpenModeENS_17FileBufferingModeE
        virtual void _fileExists(Core::Path const&); // _ZN4Core18FileSystem_generic11_fileExistsERKNS_4PathE
        virtual void _deleteFile(Core::Path const&); // _ZN4Core18FileSystem_generic11_deleteFileERKNS_4PathE
        virtual void _getFileSize(Core::Path const&, unsigned long *); // _ZN4Core18FileSystem_generic12_getFileSizeERKNS_4PathEPm
        virtual void _renameFile(Core::Path const&, Core::Path const&); // _ZN4Core18FileSystem_generic11_renameFileERKNS_4PathES3_
        virtual void _createOneDirectory(Core::Path const&); // _ZN4Core18FileSystem_generic19_createOneDirectoryERKNS_4PathE
        virtual void _directoryExists(Core::Path const&); // _ZN4Core18FileSystem_generic16_directoryExistsERKNS_4PathE
        virtual void _deleteEmptyDirectory(Core::Path const&); // _ZN4Core18FileSystem_generic21_deleteEmptyDirectoryERKNS_4PathE
        virtual void _renameDirectory(Core::Path const&, Core::Path const&); // _ZN4Core18FileSystem_generic16_renameDirectoryERKNS_4PathES3_
//      virtual void _iterateOverDirectory(Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition // _ZN4Core18FileSystem_generic21_iterateOverDirectoryERKNS_4PathENS_23DirectoryIterationFlagsESt8functionIFNS_6ResultERKNS_22DirectoryIterationItemEEE
        virtual void _fileOrDirectoryExists(Core::Path const&); // _ZN4Core18FileSystem_generic22_fileOrDirectoryExistsERKNS_4PathE
        virtual void _renameFileOrDirectory(Core::Path const&, Core::Path const&); // _ZN4Core18FileSystem_generic22_renameFileOrDirectoryERKNS_4PathES3_
//      virtual void _getEntryType(Core::Path const&, Core::FileType &); //TODO: incomplete function definition // _ZN4Core18FileSystem_generic13_getEntryTypeERKNS_4PathERNS_8FileTypeE
        virtual void _getLastModificationTime(Core::Path const&, long *); // _ZN4Core18FileSystem_generic24_getLastModificationTimeERKNS_4PathEPl
        virtual void _copyTimeAndAccessRights(Core::Path const&, Core::Path const&); // _ZN4Core18FileSystem_generic24_copyTimeAndAccessRightsERKNS_4PathES3_
//      FileSystem_generic(Core::FileAccessType, std::shared_ptr<Core::FileStorageArea>, std::shared_ptr<Core::FlatFileManifestTracker>); //TODO: incomplete function definition // _ZN4Core18FileSystem_genericC2ENS_14FileAccessTypeESt10shared_ptrINS_15FileStorageAreaEES2_INS_23FlatFileManifestTrackerEE
        void _getEntryType(Core::Path const&); // _ZN4Core18FileSystem_generic13_getEntryTypeERKNS_4PathE
    };
}
