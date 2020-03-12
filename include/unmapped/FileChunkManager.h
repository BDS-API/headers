#pragma once



class FileChunkManager {

public:
    void dequeueChunk();
    FileChunkManager(unsigned long, unsigned int);
    void getChunkInfo(int)const;
    void getTotalNumberOfChunks();
    void writtenAllChunks()const;
    void reset();
    void getAndIncrementNextChunk();
    void getDownloadedBytes()const;
    void _generateChunkInfo();
    void reset(unsigned long);
    void reset(unsigned long, unsigned int);
    FileChunkManager();
    void getChunks()const;
    void getProgress()const;
    void requestedAllChunks()const;
    void receivedAllChunks()const;
    void queueReceivedChunk(FileChunk &&);
    ~FileChunkManager();
    bool canWriteChunk()const;
};
