#pragma once

#include "./TagMemoryChunk.h"


class TagMemoryChunk {

public:

    TagMemoryChunk();
    ~TagMemoryChunk();
    TagMemoryChunk(TagMemoryChunk &&);
    void size()const;
    void operator==(TagMemoryChunk const&)const;
    void copy()const;
    void data()const;
    void operator!=(TagMemoryChunk const&)const;
};
