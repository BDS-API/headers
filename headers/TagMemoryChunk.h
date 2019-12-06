#pragma once

class TagMemoryChunk {

public:

    void TagMemoryChunk(void);
    void TagMemoryChunk(TagMemoryChunk&&);
    void size(void)const;
    void copy(void)const;
    void data(void)const;
};
