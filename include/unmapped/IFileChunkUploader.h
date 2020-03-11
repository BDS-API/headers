#pragma once

#include <memory>
#include "./FileChunkInfo.h"
#include <vector>
#include <functional>
#include "./FileInfo.h"
#include <string>


class IFileChunkUploader {

public:
    virtual ~IFileChunkUploader();
    virtual void update();
//  virtual void getServerMissingChunks(FileInfo const&, std::function<void (std::vector<FileChunkInfo, std::allocator<FileChunkInfo>>)>)const; //TODO: incomplete function definition
    virtual void confirmChunkReceived(FileInfo const&, FileChunkInfo const&);
//  virtual void uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char>> const&, std::function<void (bool)>); //TODO: incomplete function definition
//  virtual void uploadStream(FileInfo const&, unsigned long, std::string const&, std::function<bool (unsigned long &, std::vector<unsigned char, std::allocator<unsigned char>> &)>, std::function<void (IFileChunkUploader::UploadStreamResult)>); //TODO: incomplete function definition
    virtual void getChunkInfo(FileInfo const&, int)const;

    IFileChunkUploader();
};
