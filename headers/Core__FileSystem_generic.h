#pragma once

class Core::FileSystem_generic : Core::FileSystemImpl {

    virtual ~FileSystem_generic();
    virtual ~FileSystem_generic();
    virtual void isValidPath(Core::Path const&);
    virtual void isRelativePath(Core::Path const&);
    virtual void getLastModificationTime(Core::Path const&, long *);
    virtual void copyTimeAndAccessRights(Core::Path const&, Core::Path const&);
    virtual void requestFlush(std::vector<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> const&);
    virtual void shouldCommit(void);
    virtual void getCrossStorageCopyMode(void);
    virtual void getTransactionWriteSizeLimit(void)const;
    virtual void _openFile(std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>> &, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode);
    virtual void _fileExists(Core::Path const&);
    virtual void _deleteFile(Core::Path const&);
    virtual void _getFileSize(Core::Path const&, unsigned long *);
    virtual void _renameFile(Core::Path const&, Core::Path const&);
    virtual void _createEmptyFile(Core::Path const&);
    virtual void _copyFile(Core::Path const&, Core::Path const&);
    virtual void _copyFileWithLimit(Core::Path const&, Core::Path const&, unsigned long, unsigned long &, unsigned long &);
    virtual void _readFileData(Core::Path const&, std::vector<unsigned char, std::allocator<unsigned char>> &);
    virtual void _createOneDirectory(Core::Path const&);
    virtual void _createOneDirectoryIfNotExisting(Core::Path const&);
    virtual void _createDirectoryRecursively(Core::Path const&);
    virtual void _directoryExists(Core::Path const&);
    virtual void _deleteEmptyDirectory(Core::Path const&);
    virtual void _deleteDirectoryAndContentsRecursively(Core::Path const&);
    virtual void _deleteDirectoryContentsRecursively(Core::Path const&);
    virtual void _deleteRecursively(Core::Path const&, Core::FileType);
    virtual void _renameDirectory(Core::Path const&, Core::Path const&);
    virtual void _iterateOverDirectory(Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result ()(Core::DirectoryIterationItem const&)>);
    virtual void _getDirectoryFiles(std::vector<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &, Core::Path const&);
    virtual void _getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &, Core::Path const&);
    virtual void _getDirectoryFilesSizeRecursively(unsigned long &, Core::Path const&);
    virtual void _getDirectoryFilesAllocatedSizeRecursively(unsigned long &, unsigned long &, Core::Path const&);
    virtual void _copyDirectoryAndContentsRecursively(Core::Path const&, Core::Path const&);
    virtual void _fileOrDirectoryExists(Core::Path const&);
    virtual void _renameFileOrDirectory(Core::Path const&, Core::Path const&);
    virtual void _getFileOrDirectorySize(Core::Path const&, unsigned long *);
    virtual void _countDirectoryFiles(Core::Path const&, unsigned long *);
    virtual void _getEntryType(Core::Path const&, Core::FileType &);
    virtual void _createFlatFile(Core::Path const&, Core::Path const&);
    virtual void _flatFileFileExists(Core::Path const&, Core::Path const&);
    virtual void _flatFileDirectoryExists(Core::Path const&, Core::Path const&);
    virtual void _flatFileIterateOverDirectory(Core::Path const&, Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result ()(Core::DirectoryIterationItem const&)>);
    virtual void _isDirectoryPathAFlatFile(Core::Path const&);
    virtual void _copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&);
    virtual void _flatFileDeleteFileOrDirectory(Core::Path const&, Core::Path const&, bool, bool);
    virtual void _flatFileGetFileSize(Core::Path const&, Core::Path const&, unsigned long *);
    virtual void _isValidPath(Core::Path const&);
    virtual void _isRelativePath(Core::Path const&);
    virtual void _getLastModificationTime(Core::Path const&, long *);
    virtual void _copyTimeAndAccessRights(Core::Path const&, Core::Path const&);
    virtual void _endTransaction(void);
    virtual void _writeOperation(Core::Path const&, Core::Result &&, std::function<void ()(Core::FileStorageArea *)>, unsigned long);
}
