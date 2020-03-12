#pragma once



class FileChunkInfo {

public:
    void size()const;
    bool containsByte(int)const;
    bool isValid()const;
    void operator==(FileChunkInfo const&)const;
    void operator<(FileChunkInfo const&)const;
    FileChunkInfo(int, unsigned long, unsigned long);
};
