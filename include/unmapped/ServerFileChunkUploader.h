#pragma once

#include "FileInfo.h"
#include <string>
#include "FileChunkInfo.h"
#include "NetworkIdentifier.h"
#include "../json/Value.h"
#include <functional>
#include "../bedrock/network/packet/sender/PacketSender.h"
#include <vector>
#include <memory>
#include "IFileChunkUploader.h"


class ServerFileChunkUploader : IFileChunkUploader, std::enable_shared_from_this<ServerFileChunkUploader> {

public:
    virtual void getChunkInfo(FileInfo const&, int)const;
    virtual void initFileUploader(std::string const&, FileInfo const&, int, Json::Value const&, std::function<void (bool)>);
    virtual void confirmChunkReceived(FileInfo const&, FileChunkInfo const&);
    virtual void uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char> const&, std::function<void (bool)>);
    virtual void update();
    virtual void getServerMissingChunks(FileInfo const&, std::function<void (std::vector<FileChunkInfo>)>)const;
    virtual bool canCancelUpload(FileInfo const&)const;
    virtual void cancelUpload(FileInfo const&);
    ~ServerFileChunkUploader();
    virtual void getUploadProgress(FileInfo const&)const;
    ServerFileChunkUploader(PacketSender &, NetworkIdentifier const&);
    void _validateFile(FileInfo const&)const;
};
