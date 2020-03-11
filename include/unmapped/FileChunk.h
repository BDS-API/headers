#pragma once

#include "./FileChunk.h"


class FileChunk {

public:

    ~FileChunk();
    FileChunk(FileChunk &&);
    void operator<(FileChunk const&)const;
};
