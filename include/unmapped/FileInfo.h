#pragma once

#include "../core/Path.h"
#include <string>


class FileInfo {

public:
    FileInfo(Core::Path, int, std::string);
    FileInfo(FileInfo &&);
    void valid()const;
    ~FileInfo();
};
