#pragma once



class FileChunkInfo {

public:

    FileChunkInfo(int, unsigned long, unsigned long);
    void size(void)const;
    bool containsByte(int)const;
    bool isValid(void)const;
};
