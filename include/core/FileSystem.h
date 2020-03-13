#pragma once

#include "Result.h"
#include <vector>
#include <string>
#include "FileOpenMode.h"
#include <functional>


namespace Core {

    namespace FileSystem {

//      void openFile(Core::Path const&, Core::File &, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition // _ZN4Core10FileSystem8openFileERKNS_4PathERNS_4FileENS_12FileOpenModeENS_17FileBufferingModeE
//      void cleanPath_deprecated(Core::PathBuffer<Core::StackString<char, 1024ul>> &, Core::Path const&); //TODO: incomplete function definition // _ZN4Core10FileSystem20cleanPath_deprecatedERNS_10PathBufferINS_11StackStringIcLm1024EEEEERKNS_4PathE
        void fileExists(Core::Path const&); // _ZN4Core10FileSystem10fileExistsERKNS_4PathE
        void deleteFile(Core::Path const&); // _ZN4Core10FileSystem10deleteFileERKNS_4PathE
        void getFileSize(Core::Path const&, unsigned long *); // _ZN4Core10FileSystem11getFileSizeERKNS_4PathEPm
        void renameFile(Core::Path const&, Core::Path const&); // _ZN4Core10FileSystem10renameFileERKNS_4PathES3_
        void createEmptyFile(Core::Path const&); // _ZN4Core10FileSystem15createEmptyFileERKNS_4PathE
        void copyFile(Core::Path const&, Core::Path const&); // _ZN4Core10FileSystem8copyFileERKNS_4PathES3_
        void copyFileWithLimit(Core::Path const&, Core::Path const&); // _ZN4Core10FileSystem17copyFileWithLimitERKNS_4PathES3_
        void readFileData(Core::Path const&, std::vector<unsigned char> &); // _ZN4Core10FileSystem12readFileDataERKNS_4PathERSt6vectorIhSaIhEE
        void createOneDirectory(Core::Path const&); // _ZN4Core10FileSystem18createOneDirectoryERKNS_4PathE
        void createOneDirectoryIfNotExisting(Core::Path const&); // _ZN4Core10FileSystem31createOneDirectoryIfNotExistingERKNS_4PathE
        void createDirectoryRecursively(Core::Path const&); // _ZN4Core10FileSystem26createDirectoryRecursivelyERKNS_4PathE
        void directoryExists(Core::Path const&); // _ZN4Core10FileSystem15directoryExistsERKNS_4PathE
        void deleteEmptyDirectory(Core::Path const&); // _ZN4Core10FileSystem20deleteEmptyDirectoryERKNS_4PathE
        void deleteDirectoryAndContentsRecursively(Core::Path const&); // _ZN4Core10FileSystem37deleteDirectoryAndContentsRecursivelyERKNS_4PathE
        void deleteDirectoryContentsRecursively(Core::Path const&); // _ZN4Core10FileSystem34deleteDirectoryContentsRecursivelyERKNS_4PathE
        void renameDirectory(Core::Path const&, Core::Path const&); // _ZN4Core10FileSystem15renameDirectoryERKNS_4PathES3_
//      void iterateOverDirectory(Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition // _ZN4Core10FileSystem20iterateOverDirectoryERKNS_4PathENS_23DirectoryIterationFlagsESt8functionIFNS_6ResultERKNS_22DirectoryIterationItemEEE
        void getDirectoryFiles(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); // _ZN4Core10FileSystem17getDirectoryFilesERSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EERKNS_4PathE
        void getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); // _ZN4Core10FileSystem28getDirectoryFilesRecursivelyERSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EERKNS_4PathE
        void getDirectoryFilesSizeRecursively(unsigned long &, Core::Path const&); // _ZN4Core10FileSystem32getDirectoryFilesSizeRecursivelyERmRKNS_4PathE
        void getDirectoryFilesAllocatedSizeRecursively(unsigned long &, unsigned long &, Core::Path const&); // _ZN4Core10FileSystem41getDirectoryFilesAllocatedSizeRecursivelyERmS1_RKNS_4PathE
        void copyDirectoryAndContentsRecursively(Core::Path const&, Core::Path const&); // _ZN4Core10FileSystem35copyDirectoryAndContentsRecursivelyERKNS_4PathES3_
        void copyDirectoryAndContentsRecursivelyWithLimit(Core::Path const&, Core::Path const&); // _ZN4Core10FileSystem44copyDirectoryAndContentsRecursivelyWithLimitERKNS_4PathES3_
        void _getDirectoriesAndFileSizesRecursively(Core::Path const&, std::vector<Core::PathBuffer<std::string>> &, std::vector<Core::FileSystem::BasicFileData> &); // _ZN4Core10FileSystem38_getDirectoriesAndFileSizesRecursivelyERKNS_4PathERSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaISC_EERS4_INS0_13BasicFileDataESaISG_EE
        void fileOrDirectoryExists(Core::Path const&); // _ZN4Core10FileSystem21fileOrDirectoryExistsERKNS_4PathE
        void renameFileOrDirectory(Core::Path const&, Core::Path const&); // _ZN4Core10FileSystem21renameFileOrDirectoryERKNS_4PathES3_
        void getFileOrDirectorySize(Core::Path const&, unsigned long *); // _ZN4Core10FileSystem22getFileOrDirectorySizeERKNS_4PathEPm
        void countDirectoryFiles(Core::Path const&, unsigned long *); // _ZN4Core10FileSystem19countDirectoryFilesERKNS_4PathEPm
        bool isValidPath(Core::Path const&); // _ZN4Core10FileSystem11isValidPathERKNS_4PathE
        bool isRelativePath(Core::Path const&); // _ZN4Core10FileSystem14isRelativePathERKNS_4PathE
        void getLastModificationTime(Core::Path const&, long *); // _ZN4Core10FileSystem23getLastModificationTimeERKNS_4PathEPl
        void copyTimeAndAccessRights(Core::Path const&, Core::Path const&); // _ZN4Core10FileSystem23copyTimeAndAccessRightsERKNS_4PathES3_
        void createFlatFile(Core::Path const&, Core::Path const&); // _ZN4Core10FileSystem14createFlatFileERKNS_4PathES3_
        bool isDirectoryPathAFlatFile(Core::Path const&); // _ZN4Core10FileSystem24isDirectoryPathAFlatFileERKNS_4PathE
        void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&); // _ZN4Core10FileSystem12copyFlatFileERKNS_4PathES3_RKSt6vectorINS_12ExcludedPathESaIS5_EES9_
        void _copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&); // _ZN4Core10FileSystem13_copyFlatFileERKNS_4PathES3_RKSt6vectorINS_12ExcludedPathESaIS5_EES9_
        void createDirectoryForFile(Core::Path const&); // _ZN4Core10FileSystem22createDirectoryForFileERKNS_4PathE
        void getUniqueFilePathForFile(Core::Path const&); // _ZN4Core10FileSystem24getUniqueFilePathForFileERKNS_4PathE
        void getUniqueFilePathForDirectory(Core::Path const&); // _ZN4Core10FileSystem29getUniqueFilePathForDirectoryERKNS_4PathE
        void createUniquePathFromSeed(Core::Path const&, std::function<std::string (int)>); // _ZN4Core10FileSystem24createUniquePathFromSeedERKNS_4PathESt8functionIFNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE
        std::string splitPathIntoFullPathSegments(Core::Path const&); // _ZN4Core10FileSystem29splitPathIntoFullPathSegmentsB5cxx11ERKNS_4PathE
        void readFileData(Core::Path const&, unsigned long, unsigned long, std::vector<unsigned char> &, unsigned long &); // _ZN4Core10FileSystem12readFileDataERKNS_4PathEmmRSt6vectorIhSaIhEERm
//      void cleanPathSeparators_deprecated(Core::PathBuffer<Core::StackString<char, 1024ul>> &, Core::Path const&); //TODO: incomplete function definition // _ZN4Core10FileSystem30cleanPathSeparators_deprecatedERNS_10PathBufferINS_11StackStringIcLm1024EEEEERKNS_4PathE
        void checkStorageCorrupt(Core::Path const&); // _ZN4Core10FileSystem19checkStorageCorruptERKNS_4PathE
        void _copyDirectoryStructure(Core::Path const&, Core::Path const&, std::vector<Core::PathBuffer<std::string>> const&, Core::FileSystemImpl *); // _ZN4Core10FileSystem23_copyDirectoryStructureERKNS_4PathES3_RKSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaISC_EEPNS_14FileSystemImplE
        void _copyFilesWithLimit(Core::Path const&, Core::Path const&, std::vector<Core::FileSystem::BasicFileData> &, unsigned long &, unsigned long, std::function<Core::Result (Core::Path const&, Core::Path const&, Core::FileSystem::FileTransferProgress &)> const&); // _ZN4Core10FileSystem19_copyFilesWithLimitERKNS_4PathES3_RSt6vectorINS0_13BasicFileDataESaIS5_EERmmRKSt8functionIFNS_6ResultES3_S3_RNS0_20FileTransferProgressEEE
    };
}
