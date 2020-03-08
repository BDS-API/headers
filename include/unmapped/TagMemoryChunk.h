#pragma once



class TagMemoryChunk {

public:

    TagMemoryChunk(void);
    TagMemoryChunk(TagMemoryChunk&&);
    void size()const;
    void copy()const;
    void data()const;
};
