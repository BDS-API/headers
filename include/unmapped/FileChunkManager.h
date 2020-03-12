#pragma once

#include "FileChunk.h"


class FileChunkManager {

public:
    void requestedAllChunks()const;
    FileChunkManager();
    void getProgress()const;
    void _generateChunkInfo();
    void getDownloadedBytes()const;
    void writtenAllChunks()const;
    void reset(unsigned long, unsigned int);
    void reset(unsigned long);
    void queueReceivedChunk(FileChunk &&);
    ~FileChunkManager();
    void dequeueChunk();
    void reset();
    FileChunkManager(unsigned long, unsigned int);
    void getChunkInfo(int)const;
    bool canWriteChunk()const;
    void receivedAllChunks()const;
    void getAndIncrementNextChunk();
    void getChunks()const;
    void getTotalNumberOfChunks();
};
