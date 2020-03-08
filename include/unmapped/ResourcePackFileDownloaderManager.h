#pragma once

#include "../core/Path"


class ResourcePackFileDownloaderManager {

public:
    static long MAX_CHUNK_ATTEMPTS;

    virtual ResourcePackFileDownloaderManager::~ResourcePackFileDownloaderManager();

    ResourcePackFileDownloaderManager(TaskGroup &, PacketSender &);
    void cleanup(void);
    void cancel(void);
    void _completionCallback(bool, Core::Path const&);
    void update(void);
    void downloadFile(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType);
    void _isInitialized(void)const;
    void requestFirstBatch(void);
    void chunkReceived(FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char>> const&);
    void _requestChunk(int);
    void requestNextChunk(void);
    void getDownloadedBytes(void)const;
    void getProgress(void)const;
    void addCompletionCallback(std::function<void ()(bool, Core::Path const&)>);
    void addProgressCallback(std::function<void ()(float)>);
    void _confirmChunkReceived(float);
    void _unzipContent(Core::Path const&, Core::PathBuffer<Core::StackString<char, 1024ul>> &);
    void finalizeAllChunks(void);
};
