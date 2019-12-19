#pragma once

class FileChunkInfo {

public:

    FileChunkInfo(int, unsigned long, unsigned long);
    void size(void)const;
    void containsByte(int)const;
    bool isValid(void)const;
};
