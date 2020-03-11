#pragma once

#include "../core/Path.h"
#include "./FileInfo.h"
#include <string>


class FileInfo {

public:

    FileInfo(Core::Path, int, std::string);
    ~FileInfo();
    void valid()const;
    FileInfo(FileInfo &&);
};
