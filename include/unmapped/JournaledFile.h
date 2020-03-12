#pragma once

#include <vector>
#include <string>
#include <functional>
#include "../core/Path.h"
#include "../core/FileOpenMode.h"
#include "../core/Result.h"


class JournaledFile {

public:
    void getFile()const;
    void populateImportantFiles(Core::Path, std::vector<std::string> &);
//  void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
    void close();
    bool isOldFile(Core::Path);
    bool isOpen()const;
    JournaledFile(std::function<Core::Result (Core::Path)> &&);
    void _flushFiles();
    std::string findBackupPath(Core::Path);
    std::string findReadPath(Core::Path);
    bool isNewFile(Core::Path);
    void flush();
    void getFile();
    void fileOrBackupExists(Core::Path);
    void write(void const*, unsigned long);
    ~JournaledFile();
};
