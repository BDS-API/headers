#pragma once



class FileChunkManager {

public:

    FileChunkManager(void);
    FileChunkManager(unsigned long, unsigned int);
    void _generateChunkInfo(void);
    void reset(void);
    void reset(unsigned long, unsigned int);
    void reset(unsigned long);
    void queueReceivedChunk(FileChunk &&);
    void getAndIncrementNextChunk(void);
    void getTotalNumberOfChunks(void);
    void receivedAllChunks(void)const;
    void writtenAllChunks(void)const;
    void requestedAllChunks(void)const;
    void dequeueChunk(void);
    bool canWriteChunk(void)const;
    void getChunks(void)const;
    void getDownloadedBytes(void)const;
    void getProgress(void)const;
    void getChunkInfo(int)const;
};
