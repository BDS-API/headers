#pragma once

#include <string>
#include <vector>
#include <functional>


class ResourcePackFileDownloaderManager {

public:
    static long MAX_CHUNK_ATTEMPTS;

    ~ResourcePackFileDownloaderManager();
    void _completionCallback(bool, Core::Path const&);
    void cleanup();
    void cancel();
    void _isInitialized()const;
    void requestNextChunk();
    void update();
    void addCompletionCallback(std::function<void (bool, Core::Path const&)>);
    void addProgressCallback(std::function<void (float)>);
    void getProgress()const;
    void getDownloadedBytes()const;
    void _confirmChunkReceived(float);
//  void _unzipContent(Core::Path const&, Core::PathBuffer<Core::StackString<char, 1024ul>> &); //TODO: incomplete function definition
    void chunkReceived(FileChunkInfo const&, std::vector<unsigned char> const&);
    void _requestChunk(int);
    void requestFirstBatch();
    ResourcePackFileDownloaderManager(TaskGroup &, PacketSender &);
//  void downloadFile(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType); //TODO: incomplete function definition
    void finalizeAllChunks();
};
