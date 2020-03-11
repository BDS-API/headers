#pragma once

#include "./FileChunkInfo.h"


class FileChunkInfo {

public:

    FileChunkInfo(int, unsigned long, unsigned long);
    void operator<(FileChunkInfo const&)const;
    void operator==(FileChunkInfo const&)const;
    void size()const;
    bool containsByte(int)const;
    bool isValid()const;
};
