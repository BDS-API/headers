#pragma once

#include "Result.h"
#include <string>
#include "FlatFileManifestTracker.h"
#include "ExcludedPath.h"
#include "Path.h"
#include "FileStorageArea.h"
#include "FileOpenMode.h"
#include <functional>
#include "FileImpl.h"
#include <vector>
#include <memory>
#include "DirectoryIterationItem.h"


namespace Core {

    class FileSystemImpl {

    public:
        virtual void _getDirectoryFilesSizeRecursively(unsigned long &, Core::Path const&);
        ~FileSystemImpl();
        virtual void _createEmptyFile(Core::Path const&);
        virtual void _isRelativePath(Core::Path const&);
        virtual void getCrossStorageCopyMode();
        virtual void _deleteDirectoryAndContentsRecursively(Core::Path const&);
        virtual void _createFlatFile(Core::Path const&, Core::Path const&);
        virtual void _isDirectoryPathAFlatFile(Core::Path const&);
//      virtual void _getDirectoryFiles(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); //TODO: incomplete function definition
        virtual void _createDirectoryRecursively(Core::Path const&);
        virtual void _flatFileGetFileSize(Core::Path const&, Core::Path const&, unsigned long *);
        virtual void _flatFileDeleteFileOrDirectory(Core::Path const&, Core::Path const&, bool, bool);
        virtual void _flatFileDirectoryExists(Core::Path const&, Core::Path const&);
//      virtual void _flatFileIterateOverDirectory(Core::Path const&, Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition
        virtual void shouldCommit();
        virtual void _copyFile(Core::Path const&, Core::Path const&);
        virtual void copyTimeAndAccessRights(Core::Path const&, Core::Path const&);
        virtual void _countDirectoryFiles(Core::Path const&, unsigned long *);
//      virtual void requestFlush(std::vector<Core::PathBuffer<std::string>> const&); //TODO: incomplete function definition
        virtual void _getFileOrDirectorySize(Core::Path const&, unsigned long *);
        virtual void _isValidPath(Core::Path const&);
        virtual bool isValidPath(Core::Path const&);
        virtual void _deleteDirectoryContentsRecursively(Core::Path const&);
        virtual bool isRelativePath(Core::Path const&);
        virtual void _readFileData(Core::Path const&, std::vector<unsigned char> &);
        virtual void _copyDirectoryAndContentsRecursively(Core::Path const&, Core::Path const&);
        virtual void getTransactionWriteSizeLimit()const;
        virtual void _copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);
        virtual void _getDirectoryFilesAllocatedSizeRecursively(unsigned long &, unsigned long &, Core::Path const&);
//      virtual void _deleteRecursively(Core::Path const&, Core::FileType); //TODO: incomplete function definition
        virtual void _copyFileWithLimit(Core::Path const&, Core::Path const&, unsigned long, unsigned long &, unsigned long &);
//      virtual void _getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); //TODO: incomplete function definition
        virtual void getLastModificationTime(Core::Path const&, long *);
        virtual void _flatFileFileExists(Core::Path const&, Core::Path const&);
        virtual void _writeOperation(Core::Path const&, Core::Result &&, std::function<void (Core::FileStorageArea *)>, unsigned long);
        virtual void _endTransaction();
        virtual void _createOneDirectoryIfNotExisting(Core::Path const&);
        void deleteDirectoryContentsRecursively(Core::Path const&);
        void copyDirectoryAndContentsRecursively(Core::Path const&, Core::Path const&);
        void countDirectoryFiles(Core::Path const&, unsigned long *);
        void _isTransactionEnded()const;
        void _readWriteOperation(Core::Result &&, std::function<void (Core::FileStorageArea *)>, unsigned long, unsigned long);
        void fileExists(Core::Path const&);
        void getDirectoryFilesAllocatedSizeRecursively(unsigned long &, unsigned long &, Core::Path const&);
        void copyFileWithLimit(Core::Path const&, Core::Path const&, unsigned long, unsigned long &, unsigned long &);
        void fileOrDirectoryExists(Core::Path const&);
        void getAccessType()const;
        void notifyChangeInFileSize(long, long);
        void getGlobalStats();
        void getFileSize(Core::Path const&, unsigned long *);
        void readFileData(Core::Path const&, std::vector<unsigned char> &);
        void createFlatFile(Core::Path const&, Core::Path const&);
//      FileSystemImpl(Core::FileAccessType, std::shared_ptr<Core::FileStorageArea>, std::shared_ptr<Core::FlatFileManifestTracker>); //TODO: incomplete function definition
        void _addFile(Core::FileImpl *);
        bool isDirectoryPathAFlatFile(Core::Path const&);
//      void getDirectoryFiles(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); //TODO: incomplete function definition
        void _removeFile(Core::FileImpl *);
        void getStorageArea();
        void deleteEmptyDirectory(Core::Path const&);
        void renameDirectory(Core::Path const&, Core::Path const&);
        void renameFile(Core::Path const&, Core::Path const&);
        void getFileStats();
        void createDirectoryRecursively(Core::Path const&);
        void deleteDirectoryAndContentsRecursively(Core::Path const&);
        void setLoggingEnabled(bool);
//      void getEntryType(Core::Path const&, Core::FileType &); //TODO: incomplete function definition
//      void iterateOverDirectory(Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition
        void deleteFile(Core::Path const&);
        void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);
        void createEmptyFile(Core::Path const&);
        void _readOperation(Core::Result &&, unsigned long);
//      void openFile(std::unique_ptr<Core::FileImpl> &, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
//      void getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); //TODO: incomplete function definition
        void enumerateFiles(std::function<void (Core::FileImpl *)> const&);
        void renameFileOrDirectory(Core::Path const&, Core::Path const&);
        void getFileOrDirectorySize(Core::Path const&, unsigned long *);
        void getDirectoryFilesSizeRecursively(unsigned long &, Core::Path const&);
        void copyFile(Core::Path const&, Core::Path const&);
        void createOneDirectory(Core::Path const&);
        void getLoggingEnabled()const;
        void commit();
        void getFlatFileManifestTracker()const;
        void createOneDirectoryIfNotExisting(Core::Path const&);
        void directoryExists(Core::Path const&);
//      void _flatFileOpenFlatFile(std::unique_ptr<Core::FileImpl> &, Core::Path const&, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
    };
}
