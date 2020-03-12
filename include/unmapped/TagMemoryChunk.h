#pragma once



class TagMemoryChunk {

public:
    void data()const;
    TagMemoryChunk(TagMemoryChunk &&);
    ~TagMemoryChunk();
    void operator==(TagMemoryChunk const&)const;
    void operator!=(TagMemoryChunk const&)const;
    TagMemoryChunk();
    void copy()const;
    void size()const;
};
