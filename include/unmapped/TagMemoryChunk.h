#pragma once

class TagMemoryChunk {

public:

    TagMemoryChunk(void);
    TagMemoryChunk(TagMemoryChunk&&);
    void size(void)const;
    void copy(void)const;
    void data(void)const;
};
