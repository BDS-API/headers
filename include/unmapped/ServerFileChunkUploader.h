#pragma once

#include <vector>
#include <memory>
#include "IFileChunkUploader.h"
#include <string>
#include <functional>


class ServerFileChunkUploader : IFileChunkUploader, std::enable_shared_from_this<ServerFileChunkUploader> {

public:
    ~ServerFileChunkUploader(); // _ZN23ServerFileChunkUploaderD2Ev
    virtual void update(); // _ZN23ServerFileChunkUploader6updateEv
    virtual void initFileUploader(std::string const&, FileInfo const&, int, Json::Value const&, std::function<void (bool)>); // _ZN23ServerFileChunkUploader16initFileUploaderERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8FileInfoiRKN4Json5ValueESt8functionIFvbEE
    virtual void getServerMissingChunks(FileInfo const&, std::function<void (std::vector<FileChunkInfo>)>)const; // _ZNK23ServerFileChunkUploader22getServerMissingChunksERK8FileInfoSt8functionIFvSt6vectorI13FileChunkInfoSaIS5_EEEE
    virtual void confirmChunkReceived(FileInfo const&, FileChunkInfo const&); // _ZN23ServerFileChunkUploader20confirmChunkReceivedERK8FileInfoRK13FileChunkInfo
    virtual void uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char> const&, std::function<void (bool)>); // _ZN23ServerFileChunkUploader11uploadChunkERK8FileInfoRK13FileChunkInfoRKSt6vectorIhSaIhEESt8functionIFvbEE
    virtual bool canCancelUpload(FileInfo const&)const; // _ZNK23ServerFileChunkUploader15canCancelUploadERK8FileInfo
    virtual void cancelUpload(FileInfo const&); // _ZN23ServerFileChunkUploader12cancelUploadERK8FileInfo
    virtual void getUploadProgress(FileInfo const&)const; // _ZNK23ServerFileChunkUploader17getUploadProgressERK8FileInfo
    virtual void getChunkInfo(FileInfo const&, int)const; // _ZNK23ServerFileChunkUploader12getChunkInfoERK8FileInfoi
    ServerFileChunkUploader(PacketSender &, NetworkIdentifier const&); // _ZN23ServerFileChunkUploaderC2ER12PacketSenderRK17NetworkIdentifier
    void _validateFile(FileInfo const&)const; // _ZNK23ServerFileChunkUploader13_validateFileERK8FileInfo
};
