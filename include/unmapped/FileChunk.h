#pragma once



class FileChunk {

public:
    ~FileChunk(); // _ZN9FileChunkD2Ev
    FileChunk(FileChunk &&); // _ZN9FileChunkC2EOS_
    void operator<(FileChunk const&)const; // _ZNK9FileChunkltERKS_
};
