#pragma once

#include <string>
#include "../core/FileOpenMode.h"
#include "../core/Result.h"
#include "../core/Path.h"
#include <functional>
#include <vector>


class JournaledFile {

public:
    JournaledFile(std::function<Core::Result (Core::Path)> &&);
    void getFile()const;
    bool isOpen()const;
    void write(void const*, unsigned long);
    std::string findBackupPath(Core::Path);
    void fileOrBackupExists(Core::Path);
    void populateImportantFiles(Core::Path, std::vector<std::string> &);
    bool isNewFile(Core::Path);
    ~JournaledFile();
//  void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
    bool isOldFile(Core::Path);
    void flush();
    void _flushFiles();
    void close();
    std::string findReadPath(Core::Path);
    void getFile();
};
