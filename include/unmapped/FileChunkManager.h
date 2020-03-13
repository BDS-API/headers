#pragma once



class FileChunkManager {

public:
    FileChunkManager(); // _ZN16FileChunkManagerC2Ev
    FileChunkManager(unsigned long, unsigned int); // _ZN16FileChunkManagerC2Emj
    void _generateChunkInfo(); // _ZN16FileChunkManager18_generateChunkInfoEv
    void reset(); // _ZN16FileChunkManager5resetEv
    void reset(unsigned long, unsigned int); // _ZN16FileChunkManager5resetEmj
    void reset(unsigned long); // _ZN16FileChunkManager5resetEm
    void queueReceivedChunk(FileChunk &&); // _ZN16FileChunkManager18queueReceivedChunkEO9FileChunk
    void getAndIncrementNextChunk(); // _ZN16FileChunkManager24getAndIncrementNextChunkEv
    void getTotalNumberOfChunks(); // _ZN16FileChunkManager22getTotalNumberOfChunksEv
    void receivedAllChunks()const; // _ZNK16FileChunkManager17receivedAllChunksEv
    void writtenAllChunks()const; // _ZNK16FileChunkManager16writtenAllChunksEv
    void requestedAllChunks()const; // _ZNK16FileChunkManager18requestedAllChunksEv
    void dequeueChunk(); // _ZN16FileChunkManager12dequeueChunkEv
    bool canWriteChunk()const; // _ZNK16FileChunkManager13canWriteChunkEv
    void getChunks()const; // _ZNK16FileChunkManager9getChunksEv
    void getDownloadedBytes()const; // _ZNK16FileChunkManager18getDownloadedBytesEv
    void getProgress()const; // _ZNK16FileChunkManager11getProgressEv
    void getChunkInfo(int)const; // _ZNK16FileChunkManager12getChunkInfoEi
    ~FileChunkManager(); // _ZN16FileChunkManagerD2Ev
};
