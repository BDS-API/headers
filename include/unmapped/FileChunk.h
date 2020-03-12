#pragma once



class FileChunk {

public:
    FileChunk(FileChunk &&);
    void operator<(FileChunk const&)const;
    ~FileChunk();
};
