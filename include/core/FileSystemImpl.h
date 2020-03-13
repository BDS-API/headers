#pragma once

#include "Result.h"
#include <vector>
#include <memory>
#include "FileOpenMode.h"
#include <functional>


namespace Core {

    class FileSystemImpl {

    public:
        ~FileSystemImpl(); // _ZN4Core14FileSystemImplD2Ev
        virtual bool isValidPath(Core::Path const&); // _ZN4Core14FileSystemImpl11isValidPathERKNS_4PathE
        virtual bool isRelativePath(Core::Path const&); // _ZN4Core14FileSystemImpl14isRelativePathERKNS_4PathE
        virtual void getLastModificationTime(Core::Path const&, long *); // _ZN4Core14FileSystemImpl23getLastModificationTimeERKNS_4PathEPl
        virtual void copyTimeAndAccessRights(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl23copyTimeAndAccessRightsERKNS_4PathES3_
        virtual void requestFlush(std::vector<Core::PathBuffer<std::string>> const&); // _ZN4Core14FileSystemImpl12requestFlushERKSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EE
        virtual void shouldCommit(); // _ZN4Core14FileSystemImpl12shouldCommitEv
        virtual void getCrossStorageCopyMode(); // _ZN4Core14FileSystemImpl23getCrossStorageCopyModeEv
        virtual void getTransactionWriteSizeLimit()const; // _ZNK4Core14FileSystemImpl28getTransactionWriteSizeLimitEv
        virtual void _createEmptyFile(Core::Path const&); // _ZN4Core14FileSystemImpl16_createEmptyFileERKNS_4PathE
        virtual void _copyFile(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl9_copyFileERKNS_4PathES3_
        virtual void _copyFileWithLimit(Core::Path const&, Core::Path const&, unsigned long, unsigned long &, unsigned long &); // _ZN4Core14FileSystemImpl18_copyFileWithLimitERKNS_4PathES3_mRmS4_
        virtual void _readFileData(Core::Path const&, std::vector<unsigned char> &); // _ZN4Core14FileSystemImpl13_readFileDataERKNS_4PathERSt6vectorIhSaIhEE
        virtual void _createOneDirectoryIfNotExisting(Core::Path const&); // _ZN4Core14FileSystemImpl32_createOneDirectoryIfNotExistingERKNS_4PathE
        virtual void _createDirectoryRecursively(Core::Path const&); // _ZN4Core14FileSystemImpl27_createDirectoryRecursivelyERKNS_4PathE
        virtual void _deleteDirectoryAndContentsRecursively(Core::Path const&); // _ZN4Core14FileSystemImpl38_deleteDirectoryAndContentsRecursivelyERKNS_4PathE
        virtual void _deleteDirectoryContentsRecursively(Core::Path const&); // _ZN4Core14FileSystemImpl35_deleteDirectoryContentsRecursivelyERKNS_4PathE
//      virtual void _deleteRecursively(Core::Path const&, Core::FileType); //TODO: incomplete function definition // _ZN4Core14FileSystemImpl18_deleteRecursivelyERKNS_4PathENS_8FileTypeE
        virtual void _getDirectoryFiles(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); // _ZN4Core14FileSystemImpl18_getDirectoryFilesERSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EERKNS_4PathE
        virtual void _getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); // _ZN4Core14FileSystemImpl29_getDirectoryFilesRecursivelyERSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EERKNS_4PathE
        virtual void _getDirectoryFilesSizeRecursively(unsigned long &, Core::Path const&); // _ZN4Core14FileSystemImpl33_getDirectoryFilesSizeRecursivelyERmRKNS_4PathE
        virtual void _getDirectoryFilesAllocatedSizeRecursively(unsigned long &, unsigned long &, Core::Path const&); // _ZN4Core14FileSystemImpl42_getDirectoryFilesAllocatedSizeRecursivelyERmS1_RKNS_4PathE
        virtual void _copyDirectoryAndContentsRecursively(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl36_copyDirectoryAndContentsRecursivelyERKNS_4PathES3_
        virtual void _getFileOrDirectorySize(Core::Path const&, unsigned long *); // _ZN4Core14FileSystemImpl23_getFileOrDirectorySizeERKNS_4PathEPm
        virtual void _countDirectoryFiles(Core::Path const&, unsigned long *); // _ZN4Core14FileSystemImpl20_countDirectoryFilesERKNS_4PathEPm
        virtual void _createFlatFile(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl15_createFlatFileERKNS_4PathES3_
        virtual void _flatFileFileExists(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl19_flatFileFileExistsERKNS_4PathES3_
        virtual void _flatFileDirectoryExists(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl24_flatFileDirectoryExistsERKNS_4PathES3_
//      virtual void _flatFileIterateOverDirectory(Core::Path const&, Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition // _ZN4Core14FileSystemImpl29_flatFileIterateOverDirectoryERKNS_4PathES3_NS_23DirectoryIterationFlagsESt8functionIFNS_6ResultERKNS_22DirectoryIterationItemEEE
        virtual void _isDirectoryPathAFlatFile(Core::Path const&); // _ZN4Core14FileSystemImpl25_isDirectoryPathAFlatFileERKNS_4PathE
        virtual void _copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&); // _ZN4Core14FileSystemImpl13_copyFlatFileERKNS_4PathES3_RKSt6vectorINS_12ExcludedPathESaIS5_EES9_
        virtual void _flatFileDeleteFileOrDirectory(Core::Path const&, Core::Path const&, bool, bool); // _ZN4Core14FileSystemImpl30_flatFileDeleteFileOrDirectoryERKNS_4PathES3_bb
        virtual void _flatFileGetFileSize(Core::Path const&, Core::Path const&, unsigned long *); // _ZN4Core14FileSystemImpl20_flatFileGetFileSizeERKNS_4PathES3_Pm
        virtual void _isValidPath(Core::Path const&); // _ZN4Core14FileSystemImpl12_isValidPathERKNS_4PathE
        virtual void _isRelativePath(Core::Path const&); // _ZN4Core14FileSystemImpl15_isRelativePathERKNS_4PathE
        virtual void _endTransaction(); // _ZN4Core14FileSystemImpl15_endTransactionEv
        virtual void _writeOperation(Core::Path const&, Core::Result &&, std::function<void (Core::FileStorageArea *)>, unsigned long); // _ZN4Core14FileSystemImpl15_writeOperationERKNS_4PathEONS_6ResultESt8functionIFvPNS_15FileStorageAreaEEEm
        void getFileStats(); // _ZN4Core14FileSystemImpl12getFileStatsEv
        void getGlobalStats(); // _ZN4Core14FileSystemImpl14getGlobalStatsEv
//      FileSystemImpl(Core::FileAccessType, std::shared_ptr<Core::FileStorageArea>, std::shared_ptr<Core::FlatFileManifestTracker>); //TODO: incomplete function definition // _ZN4Core14FileSystemImplC2ENS_14FileAccessTypeESt10shared_ptrINS_15FileStorageAreaEES2_INS_23FlatFileManifestTrackerEE
        void _isTransactionEnded()const; // _ZNK4Core14FileSystemImpl19_isTransactionEndedEv
        void getAccessType()const; // _ZNK4Core14FileSystemImpl13getAccessTypeEv
        void getStorageArea(); // _ZN4Core14FileSystemImpl14getStorageAreaEv
        void setLoggingEnabled(bool); // _ZN4Core14FileSystemImpl17setLoggingEnabledEb
        void getLoggingEnabled()const; // _ZNK4Core14FileSystemImpl17getLoggingEnabledEv
        void enumerateFiles(std::function<void (Core::FileImpl *)> const&); // _ZN4Core14FileSystemImpl14enumerateFilesERKSt8functionIFvPNS_8FileImplEEE
        void commit(); // _ZN4Core14FileSystemImpl6commitEv
//      void openFile(std::unique_ptr<Core::FileImpl> &, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition // _ZN4Core14FileSystemImpl8openFileERSt10unique_ptrINS_8FileImplESt14default_deleteIS2_EERKNS_4PathENS_12FileOpenModeENS_17FileBufferingModeE
//      void _flatFileOpenFlatFile(std::unique_ptr<Core::FileImpl> &, Core::Path const&, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition // _ZN4Core14FileSystemImpl21_flatFileOpenFlatFileERSt10unique_ptrINS_8FileImplESt14default_deleteIS2_EERKNS_4PathES9_NS_12FileOpenModeENS_17FileBufferingModeE
        void _readWriteOperation(Core::Result &&, std::function<void (Core::FileStorageArea *)>, unsigned long, unsigned long); // _ZN4Core14FileSystemImpl19_readWriteOperationEONS_6ResultESt8functionIFvPNS_15FileStorageAreaEEEmm
        void _readOperation(Core::Result &&, unsigned long); // _ZN4Core14FileSystemImpl14_readOperationEONS_6ResultEm
        void fileExists(Core::Path const&); // _ZN4Core14FileSystemImpl10fileExistsERKNS_4PathE
        void deleteFile(Core::Path const&); // _ZN4Core14FileSystemImpl10deleteFileERKNS_4PathE
        void getFileSize(Core::Path const&, unsigned long *); // _ZN4Core14FileSystemImpl11getFileSizeERKNS_4PathEPm
        void renameFile(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl10renameFileERKNS_4PathES3_
        void createEmptyFile(Core::Path const&); // _ZN4Core14FileSystemImpl15createEmptyFileERKNS_4PathE
        void copyFile(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl8copyFileERKNS_4PathES3_
        void copyFileWithLimit(Core::Path const&, Core::Path const&, unsigned long, unsigned long &, unsigned long &); // _ZN4Core14FileSystemImpl17copyFileWithLimitERKNS_4PathES3_mRmS4_
        void readFileData(Core::Path const&, std::vector<unsigned char> &); // _ZN4Core14FileSystemImpl12readFileDataERKNS_4PathERSt6vectorIhSaIhEE
        void createOneDirectory(Core::Path const&); // _ZN4Core14FileSystemImpl18createOneDirectoryERKNS_4PathE
        void createOneDirectoryIfNotExisting(Core::Path const&); // _ZN4Core14FileSystemImpl31createOneDirectoryIfNotExistingERKNS_4PathE
        void createDirectoryRecursively(Core::Path const&); // _ZN4Core14FileSystemImpl26createDirectoryRecursivelyERKNS_4PathE
        void directoryExists(Core::Path const&); // _ZN4Core14FileSystemImpl15directoryExistsERKNS_4PathE
        void deleteEmptyDirectory(Core::Path const&); // _ZN4Core14FileSystemImpl20deleteEmptyDirectoryERKNS_4PathE
        void deleteDirectoryAndContentsRecursively(Core::Path const&); // _ZN4Core14FileSystemImpl37deleteDirectoryAndContentsRecursivelyERKNS_4PathE
        void deleteDirectoryContentsRecursively(Core::Path const&); // _ZN4Core14FileSystemImpl34deleteDirectoryContentsRecursivelyERKNS_4PathE
        void renameDirectory(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl15renameDirectoryERKNS_4PathES3_
//      void iterateOverDirectory(Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition // _ZN4Core14FileSystemImpl20iterateOverDirectoryERKNS_4PathENS_23DirectoryIterationFlagsESt8functionIFNS_6ResultERKNS_22DirectoryIterationItemEEE
        void getDirectoryFiles(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); // _ZN4Core14FileSystemImpl17getDirectoryFilesERSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EERKNS_4PathE
        void getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); // _ZN4Core14FileSystemImpl28getDirectoryFilesRecursivelyERSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EERKNS_4PathE
        void getDirectoryFilesSizeRecursively(unsigned long &, Core::Path const&); // _ZN4Core14FileSystemImpl32getDirectoryFilesSizeRecursivelyERmRKNS_4PathE
        void getDirectoryFilesAllocatedSizeRecursively(unsigned long &, unsigned long &, Core::Path const&); // _ZN4Core14FileSystemImpl41getDirectoryFilesAllocatedSizeRecursivelyERmS1_RKNS_4PathE
        void copyDirectoryAndContentsRecursively(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl35copyDirectoryAndContentsRecursivelyERKNS_4PathES3_
        void fileOrDirectoryExists(Core::Path const&); // _ZN4Core14FileSystemImpl21fileOrDirectoryExistsERKNS_4PathE
        void renameFileOrDirectory(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl21renameFileOrDirectoryERKNS_4PathES3_
        void createFlatFile(Core::Path const&, Core::Path const&); // _ZN4Core14FileSystemImpl14createFlatFileERKNS_4PathES3_
        bool isDirectoryPathAFlatFile(Core::Path const&); // _ZN4Core14FileSystemImpl24isDirectoryPathAFlatFileERKNS_4PathE
        void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&); // _ZN4Core14FileSystemImpl12copyFlatFileERKNS_4PathES3_RKSt6vectorINS_12ExcludedPathESaIS5_EES9_
        void getFlatFileManifestTracker()const; // _ZNK4Core14FileSystemImpl26getFlatFileManifestTrackerEv
        void getFileOrDirectorySize(Core::Path const&, unsigned long *); // _ZN4Core14FileSystemImpl22getFileOrDirectorySizeERKNS_4PathEPm
        void countDirectoryFiles(Core::Path const&, unsigned long *); // _ZN4Core14FileSystemImpl19countDirectoryFilesERKNS_4PathEPm
//      void getEntryType(Core::Path const&, Core::FileType &); //TODO: incomplete function definition // _ZN4Core14FileSystemImpl12getEntryTypeERKNS_4PathERNS_8FileTypeE
        void _addFile(Core::FileImpl *); // _ZN4Core14FileSystemImpl8_addFileEPNS_8FileImplE
        void _removeFile(Core::FileImpl *); // _ZN4Core14FileSystemImpl11_removeFileEPNS_8FileImplE
        void notifyChangeInFileSize(long, long); // _ZN4Core14FileSystemImpl22notifyChangeInFileSizeEll
    };
}
