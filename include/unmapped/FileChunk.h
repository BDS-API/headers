#pragma once



class FileChunk {

public:
    void operator<(FileChunk const&)const;
    ~FileChunk();
    FileChunk(FileChunk &&);
};
