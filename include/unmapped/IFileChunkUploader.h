#pragma once

#include <string>
#include <functional>
#include <vector>


class IFileChunkUploader {

public:
    ~IFileChunkUploader(); // _ZN18IFileChunkUploaderD2Ev
    virtual void update(); // _ZN18IFileChunkUploader6updateEv
    virtual void getServerMissingChunks(FileInfo const&, std::function<void (std::vector<FileChunkInfo>)>)const; // _ZNK18IFileChunkUploader22getServerMissingChunksERK8FileInfoSt8functionIFvSt6vectorI13FileChunkInfoSaIS5_EEEE
    virtual void confirmChunkReceived(FileInfo const&, FileChunkInfo const&); // _ZN18IFileChunkUploader20confirmChunkReceivedERK8FileInfoRK13FileChunkInfo
    virtual void uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char> const&, std::function<void (bool)>); // _ZN18IFileChunkUploader11uploadChunkERK8FileInfoRK13FileChunkInfoRKSt6vectorIhSaIhEESt8functionIFvbEE
    virtual void uploadStream(FileInfo const&, unsigned long, std::string const&, std::function<bool (unsigned long &, std::vector<unsigned char> &)>, std::function<void (IFileChunkUploader::UploadStreamResult)>); // _ZN18IFileChunkUploader12uploadStreamERK8FileInfomRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt8functionIFbRmRSt6vectorIhSaIhEEEESB_IFvNS_18UploadStreamResultEEE
    virtual void getChunkInfo(FileInfo const&, int)const; // _ZNK18IFileChunkUploader12getChunkInfoERK8FileInfoi
    IFileChunkUploader(); // _ZN18IFileChunkUploaderC2Ev
};
