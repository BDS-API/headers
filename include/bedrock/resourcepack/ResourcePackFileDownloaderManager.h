#pragma once

#include "../network/packet/sender/PacketSender"
#include "../../core/Path"
#include "../../unmapped/TaskGroup"
#include "../../unmapped/FileChunkInfo"


class ResourcePackFileDownloaderManager {

public:
    static long MAX_CHUNK_ATTEMPTS;

    virtual ResourcePackFileDownloaderManager::~ResourcePackFileDownloaderManager()

    ResourcePackFileDownloaderManager(TaskGroup &, PacketSender &);
    void cleanup();
    void cancel();
    void _completionCallback(bool, Core::Path const&);
    void update();
    void downloadFile(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType);
    void _isInitialized()const;
    void requestFirstBatch();
    void chunkReceived(FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char>> const&);
    void _requestChunk(int);
    void requestNextChunk();
    void getDownloadedBytes()const;
    void getProgress()const;
    void addCompletionCallback(std::function<void ()(bool, Core::Path const&)>);
    void addProgressCallback(std::function<void ()(float)>);
    void _confirmChunkReceived(float);
    void _unzipContent(Core::Path const&, Core::PathBuffer<Core::StackString<char, 1024ul>> &);
    void finalizeAllChunks();
};
