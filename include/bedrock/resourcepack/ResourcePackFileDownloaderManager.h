#pragma once

#include <string>
#include <functional>
#include <vector>


class ResourcePackFileDownloaderManager {

public:
    static long MAX_CHUNK_ATTEMPTS;

    ~ResourcePackFileDownloaderManager(); // _ZN33ResourcePackFileDownloaderManagerD2Ev
    ResourcePackFileDownloaderManager(TaskGroup &, PacketSender &); // _ZN33ResourcePackFileDownloaderManagerC2ER9TaskGroupR12PacketSender
    void cleanup(); // _ZN33ResourcePackFileDownloaderManager7cleanupEv
    void cancel(); // _ZN33ResourcePackFileDownloaderManager6cancelEv
    void _completionCallback(bool, Core::Path const&); // _ZN33ResourcePackFileDownloaderManager19_completionCallbackEbRKN4Core4PathE
    void update(); // _ZN33ResourcePackFileDownloaderManager6updateEv
//  void downloadFile(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType); //TODO: incomplete function definition // _ZN33ResourcePackFileDownloaderManager12downloadFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEjimS7_b8PackType
    void _isInitialized()const; // _ZNK33ResourcePackFileDownloaderManager14_isInitializedEv
    void requestFirstBatch(); // _ZN33ResourcePackFileDownloaderManager17requestFirstBatchEv
    void chunkReceived(FileChunkInfo const&, std::vector<unsigned char> const&); // _ZN33ResourcePackFileDownloaderManager13chunkReceivedERK13FileChunkInfoRKSt6vectorIhSaIhEE
    void _requestChunk(int); // _ZN33ResourcePackFileDownloaderManager13_requestChunkEi
    void requestNextChunk(); // _ZN33ResourcePackFileDownloaderManager16requestNextChunkEv
    void getDownloadedBytes()const; // _ZNK33ResourcePackFileDownloaderManager18getDownloadedBytesEv
    void getProgress()const; // _ZNK33ResourcePackFileDownloaderManager11getProgressEv
    void addCompletionCallback(std::function<void (bool, Core::Path const&)>); // _ZN33ResourcePackFileDownloaderManager21addCompletionCallbackESt8functionIFvbRKN4Core4PathEEE
    void addProgressCallback(std::function<void (float)>); // _ZN33ResourcePackFileDownloaderManager19addProgressCallbackESt8functionIFvfEE
    void _confirmChunkReceived(float); // _ZN33ResourcePackFileDownloaderManager21_confirmChunkReceivedEf
//  void _unzipContent(Core::Path const&, Core::PathBuffer<Core::StackString<char, 1024ul>> &); //TODO: incomplete function definition // _ZN33ResourcePackFileDownloaderManager13_unzipContentERKN4Core4PathERNS0_10PathBufferINS0_11StackStringIcLm1024EEEEE
    void finalizeAllChunks(); // _ZN33ResourcePackFileDownloaderManager17finalizeAllChunksEv
};
