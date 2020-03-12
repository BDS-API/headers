#pragma once



class TagMemoryChunk {

public:
    void operator!=(TagMemoryChunk const&)const;
    TagMemoryChunk(TagMemoryChunk &&);
    void size()const;
    void copy()const;
    TagMemoryChunk();
    void operator==(TagMemoryChunk const&)const;
    void data()const;
    ~TagMemoryChunk();
};
