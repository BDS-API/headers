#pragma once

#include <string>
#include <vector>
#include <functional>


class IFileChunkUploader {

public:
    virtual void confirmChunkReceived(FileInfo const&, FileChunkInfo const&);
    virtual void getChunkInfo(FileInfo const&, int)const;
    virtual void uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char> const&, std::function<void (bool)>);
    virtual void getServerMissingChunks(FileInfo const&, std::function<void (std::vector<FileChunkInfo>)>)const;
    virtual void uploadStream(FileInfo const&, unsigned long, std::string const&, std::function<bool (unsigned long &, std::vector<unsigned char> &)>, std::function<void (IFileChunkUploader::UploadStreamResult)>);
    virtual void update();
    ~IFileChunkUploader();
    IFileChunkUploader();
};
