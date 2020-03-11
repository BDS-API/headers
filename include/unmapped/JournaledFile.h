#pragma once

#include "../core/Path.h"
#include <memory>
#include <vector>
#include "../core/Result.h"
#include "../core/FileOpenMode.h"
#include <functional>
#include <string>


class JournaledFile {

public:

    std::string findReadPath(Core::Path);
    std::string findBackupPath(Core::Path);
    void fileOrBackupExists(Core::Path);
    void populateImportantFiles(Core::Path, std::vector<std::string, std::allocator<std::string>> &);
    bool isOldFile(Core::Path);
    bool isNewFile(Core::Path);
    JournaledFile(std::function<Core::Result (Core::Path)> &&);
    ~JournaledFile();
    bool isOpen()const;
    void close();
//  void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
    void _flushFiles();
//  void write(void const*, unsigned long); //TODO: incomplete function definition
    void flush();
    void getFile();
    void getFile()const;
};
