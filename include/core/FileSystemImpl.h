#pragma once

#include <functional>
#include "./FlatFileManifestTracker.h"
#include "./ExcludedPath.h"
#include "./FileOpenMode.h"
#include <memory>
#include "./FileImpl.h"
#include "./FileStorageArea.h"
#include "./DirectoryIterationItem.h"
#include <vector>
#include "./Result.h"
#include "./Path.h"
#include <string>


namespace Core {

class FileSystemImpl {

public:
    virtual ~FileSystemImpl();
    virtual bool isValidPath(Core::Path const&);
    virtual bool isRelativePath(Core::Path const&);
    virtual void getLastModificationTime(Core::Path const&, long *);
    virtual void copyTimeAndAccessRights(Core::Path const&, Core::Path const&);
//  virtual void requestFlush(std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> const&); //TODO: incomplete function definition
    virtual void shouldCommit();
    virtual void getCrossStorageCopyMode();
    virtual void getTransactionWriteSizeLimit()const;
    virtual void _createEmptyFile(Core::Path const&);
    virtual void _copyFile(Core::Path const&, Core::Path const&);
    virtual void _copyFileWithLimit(Core::Path const&, Core::Path const&, unsigned long, unsigned long &, unsigned long &);
    virtual void _readFileData(Core::Path const&, std::vector<unsigned char, std::allocator<unsigned char>> &);
    virtual void _createOneDirectoryIfNotExisting(Core::Path const&);
    virtual void _createDirectoryRecursively(Core::Path const&);
    virtual void _deleteDirectoryAndContentsRecursively(Core::Path const&);
    virtual void _deleteDirectoryContentsRecursively(Core::Path const&);
//  virtual void _deleteRecursively(Core::Path const&, Core::FileType); //TODO: incomplete function definition
//  virtual void _getDirectoryFiles(std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &, Core::Path const&); //TODO: incomplete function definition
//  virtual void _getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &, Core::Path const&); //TODO: incomplete function definition
    virtual void _getDirectoryFilesSizeRecursively(unsigned long &, Core::Path const&);
    virtual void _getDirectoryFilesAllocatedSizeRecursively(unsigned long &, unsigned long &, Core::Path const&);
    virtual void _copyDirectoryAndContentsRecursively(Core::Path const&, Core::Path const&);
    virtual void _getFileOrDirectorySize(Core::Path const&, unsigned long *);
    virtual void _countDirectoryFiles(Core::Path const&, unsigned long *);
    virtual void _createFlatFile(Core::Path const&, Core::Path const&);
    virtual void _flatFileFileExists(Core::Path const&, Core::Path const&);
    virtual void _flatFileDirectoryExists(Core::Path const&, Core::Path const&);
//  virtual void _flatFileIterateOverDirectory(Core::Path const&, Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition
    virtual void _isDirectoryPathAFlatFile(Core::Path const&);
    virtual void _copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&);
    virtual void _flatFileDeleteFileOrDirectory(Core::Path const&, Core::Path const&, bool, bool);
    virtual void _flatFileGetFileSize(Core::Path const&, Core::Path const&, unsigned long *);
    virtual void _isValidPath(Core::Path const&);
    virtual void _isRelativePath(Core::Path const&);
    virtual void _endTransaction();
//  virtual void _writeOperation(Core::Path const&, Core::Result &&, std::function<void (Core::FileStorageArea *)>, unsigned long); //TODO: incomplete function definition

    void getFileStats();
    void getGlobalStats();
//  FileSystemImpl(Core::FileAccessType, std::shared_ptr<Core::FileStorageArea>, std::shared_ptr<Core::FlatFileManifestTracker>); //TODO: incomplete function definition
    void _isTransactionEnded()const;
    void getAccessType()const;
    void getStorageArea();
    void setLoggingEnabled(bool);
    void getLoggingEnabled()const;
//  void enumerateFiles(std::function<void (Core::FileImpl *)> const&); //TODO: incomplete function definition
    void commit();
//  void openFile(std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>> &, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
//  void _flatFileOpenFlatFile(std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>> &, Core::Path const&, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
//  void _readWriteOperation(Core::Result &&, std::function<void (Core::FileStorageArea *)>, unsigned long, unsigned long); //TODO: incomplete function definition
    void _readOperation(Core::Result &&, unsigned long);
    void fileExists(Core::Path const&);
    void deleteFile(Core::Path const&);
    void getFileSize(Core::Path const&, unsigned long *);
    void renameFile(Core::Path const&, Core::Path const&);
    void createEmptyFile(Core::Path const&);
    void copyFile(Core::Path const&, Core::Path const&);
    void copyFileWithLimit(Core::Path const&, Core::Path const&, unsigned long, unsigned long &, unsigned long &);
    void readFileData(Core::Path const&, std::vector<unsigned char, std::allocator<unsigned char>> &);
    void createOneDirectory(Core::Path const&);
    void createOneDirectoryIfNotExisting(Core::Path const&);
    void createDirectoryRecursively(Core::Path const&);
    void directoryExists(Core::Path const&);
    void deleteEmptyDirectory(Core::Path const&);
    void deleteDirectoryAndContentsRecursively(Core::Path const&);
    void deleteDirectoryContentsRecursively(Core::Path const&);
    void renameDirectory(Core::Path const&, Core::Path const&);
//  void iterateOverDirectory(Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition
//  void getDirectoryFiles(std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &, Core::Path const&); //TODO: incomplete function definition
//  void getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &, Core::Path const&); //TODO: incomplete function definition
    void getDirectoryFilesSizeRecursively(unsigned long &, Core::Path const&);
    void getDirectoryFilesAllocatedSizeRecursively(unsigned long &, unsigned long &, Core::Path const&);
    void copyDirectoryAndContentsRecursively(Core::Path const&, Core::Path const&);
    void fileOrDirectoryExists(Core::Path const&);
    void renameFileOrDirectory(Core::Path const&, Core::Path const&);
    void createFlatFile(Core::Path const&, Core::Path const&);
    bool isDirectoryPathAFlatFile(Core::Path const&);
    void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&);
    void getFlatFileManifestTracker()const;
    void getFileOrDirectorySize(Core::Path const&, unsigned long *);
    void countDirectoryFiles(Core::Path const&, unsigned long *);
//  void getEntryType(Core::Path const&, Core::FileType &); //TODO: incomplete function definition
    void _addFile(Core::FileImpl *);
    void _removeFile(Core::FileImpl *);
    void notifyChangeInFileSize(long, long);
};

}