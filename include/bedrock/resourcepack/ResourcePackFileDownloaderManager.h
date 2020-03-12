#pragma once

#include "../../core/Path.h"
#include "../../unmapped/TaskGroup.h"
#include <string>
#include <functional>
#include <vector>
#include "../network/packet/sender/PacketSender.h"
#include "../../unmapped/FileChunkInfo.h"


class ResourcePackFileDownloaderManager {

public:
    static long MAX_CHUNK_ATTEMPTS;

    ~ResourcePackFileDownloaderManager();
    void cancel();
    void addProgressCallback(std::function<void (float)>);
    void addCompletionCallback(std::function<void (bool, Core::Path const&)>);
//  void _unzipContent(Core::Path const&, Core::PathBuffer<Core::StackString<char, 1024ul>> &); //TODO: incomplete function definition
    void update();
    void _isInitialized()const;
    void _completionCallback(bool, Core::Path const&);
    void getProgress()const;
    void _requestChunk(int);
    ResourcePackFileDownloaderManager(TaskGroup &, PacketSender &);
    void requestFirstBatch();
    void chunkReceived(FileChunkInfo const&, std::vector<unsigned char> const&);
    void _confirmChunkReceived(float);
    void cleanup();
//  void downloadFile(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType); //TODO: incomplete function definition
    void finalizeAllChunks();
    void getDownloadedBytes()const;
    void requestNextChunk();
};
