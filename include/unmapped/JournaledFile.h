#pragma once

#include "../core/Path"
#include "../core/FileOpenMode"


class JournaledFile {

public:

    void fileOrBackupExists(Core::Path);
    void populateImportantFiles(Core::Path, std::vector<std::string, std::allocator<std::string>> &);
    bool isOldFile(Core::Path);
    bool isNewFile(Core::Path);
    JournaledFile(std::function<Core::Result ()(Core::Path)> &&);
    bool isOpen()const;
    void close();
    void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode);
    void _flushFiles();
    void write(void const*, unsigned long);
    void flush();
    void getFile();
    void getFile()const;
};
