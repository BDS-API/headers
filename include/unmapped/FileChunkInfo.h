#pragma once



class FileChunkInfo {

public:
    FileChunkInfo(int, unsigned long, unsigned long); // _ZN13FileChunkInfoC2Eimm
    void operator<(FileChunkInfo const&)const; // _ZNK13FileChunkInfoltERKS_
    void operator==(FileChunkInfo const&)const; // _ZNK13FileChunkInfoeqERKS_
    void size()const; // _ZNK13FileChunkInfo4sizeEv
    bool containsByte(int)const; // _ZNK13FileChunkInfo12containsByteEi
    bool isValid()const; // _ZNK13FileChunkInfo7isValidEv
};
