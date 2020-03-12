#pragma once

#include "Result.h"
#include "BasicFileData.h"
#include <string>
#include "FileTransferProgress.h"
#include "ExcludedPath.h"
#include "Path.h"
#include "FileOpenMode.h"
#include <functional>
#include "File.h"
#include <vector>
#include "FileSystemImpl.h"
#include "DirectoryIterationItem.h"


namespace Core {

    namespace FileSystem {

        void getLastModificationTime(Core::Path const&, long *);
        void getUniqueFilePathForFile(Core::Path const&);
        void createUniquePathFromSeed(Core::Path const&, std::function<std::string (int)>);
        void createDirectoryRecursively(Core::Path const&);
//      void _copyDirectoryStructure(Core::Path const&, Core::Path const&, std::vector<Core::PathBuffer<std::string>> const&, Core::FileSystemImpl *); //TODO: incomplete function definition
        void createOneDirectoryIfNotExisting(Core::Path const&);
        bool isRelativePath(Core::Path const&);
        void deleteDirectoryAndContentsRecursively(Core::Path const&);
        bool isValidPath(Core::Path const&);
        void _copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);
        void _copyFilesWithLimit(Core::Path const&, Core::Path const&, std::vector<Core::FileSystem::BasicFileData> &, unsigned long &, unsigned long, std::function<Core::Result (Core::Path const&, Core::Path const&, Core::FileSystem::FileTransferProgress &)> const&);
        void directoryExists(Core::Path const&);
//      void getDirectoryFilesRecursively(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); //TODO: incomplete function definition
        void getUniqueFilePathForDirectory(Core::Path const&);
        void readFileData(Core::Path const&, std::vector<unsigned char> &);
        void createFlatFile(Core::Path const&, Core::Path const&);
        void copyFileWithLimit(Core::Path const&, Core::Path const&);
        void fileOrDirectoryExists(Core::Path const&);
        void getFileOrDirectorySize(Core::Path const&, unsigned long *);
        void createDirectoryForFile(Core::Path const&);
        void readFileData(Core::Path const&, unsigned long, unsigned long, std::vector<unsigned char> &, unsigned long &);
//      void openFile(Core::Path const&, Core::File &, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
        bool isDirectoryPathAFlatFile(Core::Path const&);
        void deleteEmptyDirectory(Core::Path const&);
        void deleteDirectoryContentsRecursively(Core::Path const&);
        void copyDirectoryAndContentsRecursivelyWithLimit(Core::Path const&, Core::Path const&);
        void renameDirectory(Core::Path const&, Core::Path const&);
        void createEmptyFile(Core::Path const&);
//      void cleanPathSeparators_deprecated(Core::PathBuffer<Core::StackString<char, 1024ul>> &, Core::Path const&); //TODO: incomplete function definition
        void renameFileOrDirectory(Core::Path const&, Core::Path const&);
        void fileExists(Core::Path const&);
        void getDirectoryFilesSizeRecursively(unsigned long &, Core::Path const&);
//      void getDirectoryFiles(std::vector<Core::PathBuffer<std::string>> &, Core::Path const&); //TODO: incomplete function definition
//      void cleanPath_deprecated(Core::PathBuffer<Core::StackString<char, 1024ul>> &, Core::Path const&); //TODO: incomplete function definition
        void getDirectoryFilesAllocatedSizeRecursively(unsigned long &, unsigned long &, Core::Path const&);
        void copyFile(Core::Path const&, Core::Path const&);
        void copyTimeAndAccessRights(Core::Path const&, Core::Path const&);
//      void _getDirectoriesAndFileSizesRecursively(Core::Path const&, std::vector<Core::PathBuffer<std::string>> &, std::vector<Core::FileSystem::BasicFileData> &); //TODO: incomplete function definition
        void createOneDirectory(Core::Path const&);
        void checkStorageCorrupt(Core::Path const&);
        std::string splitPathIntoFullPathSegments(Core::Path const&);
        void getFileSize(Core::Path const&, unsigned long *);
//      void iterateOverDirectory(Core::Path const&, Core::DirectoryIterationFlags, std::function<Core::Result (Core::DirectoryIterationItem const&)>); //TODO: incomplete function definition
        void countDirectoryFiles(Core::Path const&, unsigned long *);
        void deleteFile(Core::Path const&);
        void copyDirectoryAndContentsRecursively(Core::Path const&, Core::Path const&);
        void copyFlatFile(Core::Path const&, Core::Path const&, std::vector<Core::ExcludedPath> const&, std::vector<Core::ExcludedPath> const&);
        void renameFile(Core::Path const&, Core::Path const&);
    };
}
