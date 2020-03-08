#pragma once



class FileChunkInfo {

public:

    FileChunkInfo(int, unsigned long, unsigned long);
    void size()const;
    bool containsByte(int)const;
    bool isValid()const;
};
