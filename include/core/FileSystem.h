#pragma once

#include <functional>
#include "./ExcludedPath.h"
#include "./FileTransferProgress.h"
#include "./File.h"
#include "./FileOpenMode.h"
#include <memory>
#include "./DirectoryIterationItem.h"
#include <vector>
#include "./FileSystemImpl.h"
#include "./BasicFileData.h"
#include "./Result.h"
#include "./Path.h"
#include <string>


namespace Core {

class FileSystem {

public:

//  void openFile(Core::Path const&, Core::File &, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
//  void cleanPath_deprecated(Core::PathBuffer<Core::StackString<char, 1024ul>> &, Core::Path const&); //TODO: incomplete function definition
    void fileExists(Core::Path const&);
    void deleteFile(Core::Path const&);
    void getFileSize(Core::Path const&, unsigned long *);
    void renameFile(Core::Path const&, Core::Path const&);
    void createEmptyFile(Core::Path const&);
    void copyFile(Core::Path const&, Core::Path const&);
    void copyFileWithLimit(Core::Path const&, Core::Path const&);
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
    void copyDirectoryAndContentsRecursivelyWithLimit(Core::Path const&, Core::Path const&);
//  void _getDirectoriesAndFileSizesRecursively(Core::Path const&, std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &, std::vector<Core::FileSystem::BasicFileData, std::allocator<std::vector &>> &); //TODO: incomplete function definition
    void fileOrDirectoryExists(Core::Path const&);
    void renameFileOrDirectory(Core::Path const&, Core::Path const&);
    void getFileOrDirectorySize(Core::Path const&, unsigned long *);
    void countDirectoryFiles(Core::Path const&, unsigned long *);
    bool isValidPath(Core::Path const&);
    bool isRelativePath(Core::Path const&);
    void getLastModificationTime(Core::Path const&, long *);
    void copyTimeAndAccessRights(Core::Path const&, Core::Path const&);
    void createFlatFile(Core::Path const&, Core::Path const&);
    bool isDirectoryPathAFlatFile(Core::Path const&);
    void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&);
    void _copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath>> const&);
    void createDirectoryForFile(Core::Path const&);
    void getUniqueFilePathForFile(Core::Path const&);
    void getUniqueFilePathForDirectory(Core::Path const&);
    void createUniquePathFromSeed(Core::Path const&, std::function<std::string (int)>);
    std::string splitPathIntoFullPathSegments(Core::Path const&);
    void readFileData(Core::Path const&, unsigned long, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> &, unsigned long &);
//  void cleanPathSeparators_deprecated(Core::PathBuffer<Core::StackString<char, 1024ul>> &, Core::Path const&); //TODO: incomplete function definition
    void checkStorageCorrupt(Core::Path const&);
//  void _copyDirectoryStructure(Core::Path const&, Core::Path const&, std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> const&, Core::FileSystemImpl *); //TODO: incomplete function definition
    void _copyFilesWithLimit(Core::Path const&, Core::Path const&, std::vector<Core::FileSystem::BasicFileData, std::allocator<Core::FileSystem::BasicFileData>> &, unsigned long &, unsigned long, std::function<Core::Result (Core::Path const&, Core::Path const&, Core::FileSystem::FileTransferProgress &)> const&);
};

}