#pragma once



class TagMemoryChunk {

public:
    TagMemoryChunk(); // _ZN14TagMemoryChunkC2Ev
    ~TagMemoryChunk(); // _ZN14TagMemoryChunkD2Ev
    TagMemoryChunk(TagMemoryChunk &&); // _ZN14TagMemoryChunkC2EOS_
    void size()const; // _ZNK14TagMemoryChunk4sizeEv
    void operator==(TagMemoryChunk const&)const; // _ZNK14TagMemoryChunkeqERKS_
    void copy()const; // _ZNK14TagMemoryChunk4copyEv
    void data()const; // _ZNK14TagMemoryChunk4dataEv
    void operator!=(TagMemoryChunk const&)const; // _ZNK14TagMemoryChunkneERKS_
};
