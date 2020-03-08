#pragma once

#include "../json/Value"
#include "../bedrock/network/packet/sender/PacketSender"


class ServerFileChunkUploader : IFileChunkUploader, std::enable_shared_from_this<ServerFileChunkUploader> {

public:
    virtual ServerFileChunkUploader::~ServerFileChunkUploader()
    virtual void update();
    virtual void initFileUploader(std::string const&, FileInfo const&, int, Json::Value const&, std::function<void ()(bool)>);
    virtual void getServerMissingChunks(FileInfo const&, std::function<void ()(std::vector<FileChunkInfo, std::allocator<FileChunkInfo>>)>)const;
    virtual void confirmChunkReceived(FileInfo const&, FileChunkInfo const&);
    virtual void uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char>> const&, std::function<void ()(bool)>);
    virtual bool canCancelUpload(FileInfo const&)const;
    virtual void cancelUpload(FileInfo const&);
    virtual void getUploadProgress(FileInfo const&)const;
    virtual void getChunkInfo(FileInfo const&, int)const;

    ServerFileChunkUploader(PacketSender &, NetworkIdentifier const&);
    void _validateFile(FileInfo const&)const;
};
