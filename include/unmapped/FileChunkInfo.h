#pragma once



class FileChunkInfo {

public:
    void operator==(FileChunkInfo const&)const;
    FileChunkInfo(int, unsigned long, unsigned long);
    void size()const;
    bool containsByte(int)const;
    void operator<(FileChunkInfo const&)const;
    bool isValid()const;
};
