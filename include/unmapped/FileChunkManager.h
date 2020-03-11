#pragma once

#include "./FileChunk.h"


class FileChunkManager {

public:

    FileChunkManager();
    FileChunkManager(unsigned long, unsigned int);
    void _generateChunkInfo();
    void reset();
    void reset(unsigned long, unsigned int);
    void reset(unsigned long);
    void queueReceivedChunk(FileChunk &&);
    void getAndIncrementNextChunk();
    void getTotalNumberOfChunks();
    void receivedAllChunks()const;
    void writtenAllChunks()const;
    void requestedAllChunks()const;
    void dequeueChunk();
    bool canWriteChunk()const;
    void getChunks()const;
    void getDownloadedBytes()const;
    void getProgress()const;
    void getChunkInfo(int)const;
    ~FileChunkManager();
};
