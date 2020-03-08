#pragma once

#include "../core/Path"


class FileInfo {

public:

    FileInfo(Core::Path, int, std::string);
    void valid()const;
    FileInfo(FileInfo&&);
};
