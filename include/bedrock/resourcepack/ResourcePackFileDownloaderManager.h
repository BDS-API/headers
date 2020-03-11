#pragma once

#include "../../core/Path.h"
#include "../../unmapped/TaskGroup.h"
#include <memory>
#include "../../unmapped/FileChunkInfo.h"
#include <vector>
#include "../network/packet/sender/PacketSender.h"
#include <functional>
#include <string>


class ResourcePackFileDownloaderManager {

public:
    static long MAX_CHUNK_ATTEMPTS;

    virtual ~ResourcePackFileDownloaderManager();

    ResourcePackFileDownloaderManager(TaskGroup &, PacketSender &);
    void cleanup();
    void cancel();
    void _completionCallback(bool, Core::Path const&);
    void update();
//  void downloadFile(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType); //TODO: incomplete function definition
    void _isInitialized()const;
    void requestFirstBatch();
    void chunkReceived(FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char>> const&);
    void _requestChunk(int);
    void requestNextChunk();
    void getDownloadedBytes()const;
    void getProgress()const;
//  void addCompletionCallback(std::function<void (bool, Core::Path const&)>); //TODO: incomplete function definition
//  void addProgressCallback(std::function<void (float)>); //TODO: incomplete function definition
    void _confirmChunkReceived(float);
//  void _unzipContent(Core::Path const&, Core::PathBuffer<Core::StackString<char, 1024ul>> &); //TODO: incomplete function definition
    void finalizeAllChunks();
};
