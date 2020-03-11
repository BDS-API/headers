#pragma once

#include "./IFileChunkUploader.h"
#include "../json/Value.h"
#include "../bedrock/network/packet/sender/PacketSender.h"
#include <memory>
#include "./ServerFileChunkUploader.h"
#include "./FileChunkInfo.h"
#include <vector>
#include "./NetworkIdentifier.h"
#include <functional>
#include "./FileInfo.h"
#include <string>


class ServerFileChunkUploader : IFileChunkUploader, std::enable_shared_from_this<ServerFileChunkUploader> {

public:
    virtual ~ServerFileChunkUploader();
    virtual void update();
//  virtual void initFileUploader(std::string const&, FileInfo const&, int, Json::Value const&, std::function<void (bool)>); //TODO: incomplete function definition
//  virtual void getServerMissingChunks(FileInfo const&, std::function<void (std::vector<FileChunkInfo, std::allocator<FileChunkInfo>>)>)const; //TODO: incomplete function definition
    virtual void confirmChunkReceived(FileInfo const&, FileChunkInfo const&);
//  virtual void uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char>> const&, std::function<void (bool)>); //TODO: incomplete function definition
    virtual bool canCancelUpload(FileInfo const&)const;
    virtual void cancelUpload(FileInfo const&);
    virtual void getUploadProgress(FileInfo const&)const;
    virtual void getChunkInfo(FileInfo const&, int)const;

    ServerFileChunkUploader(PacketSender &, NetworkIdentifier const&);
    void _validateFile(FileInfo const&)const;
};
