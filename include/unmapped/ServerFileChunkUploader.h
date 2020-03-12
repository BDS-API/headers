#pragma once

#include <memory>
#include <vector>
#include <string>
#include "IFileChunkUploader.h"
#include <functional>


class ServerFileChunkUploader : IFileChunkUploader, std::enable_shared_from_this<ServerFileChunkUploader> {

public:
    virtual void cancelUpload(FileInfo const&);
    virtual void getServerMissingChunks(FileInfo const&, std::function<void (std::vector<FileChunkInfo>)>)const;
    virtual void getChunkInfo(FileInfo const&, int)const;
    virtual void initFileUploader(std::string const&, FileInfo const&, int, Json::Value const&, std::function<void (bool)>);
    ~ServerFileChunkUploader();
    virtual void update();
    virtual void uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char> const&, std::function<void (bool)>);
    virtual bool canCancelUpload(FileInfo const&)const;
    virtual void confirmChunkReceived(FileInfo const&, FileChunkInfo const&);
    virtual void getUploadProgress(FileInfo const&)const;
    ServerFileChunkUploader(PacketSender &, NetworkIdentifier const&);
    void _validateFile(FileInfo const&)const;
};
