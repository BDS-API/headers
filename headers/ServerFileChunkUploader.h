#pragma once

class ServerFileChunkUploader : IFileChunkUploader, std::enable_shared_from_this_ltServerFileChunkUploader_ge {

public:
    virtual ~ServerFileChunkUploader();
    virtual void update(void);
    virtual void initFileUploader(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, FileInfo const&, int, Json::Value const&, std::function<void ()(bool)>);
    virtual void getServerMissingChunks(FileInfo const&, std::function<void ()(std::vector<FileChunkInfo, std::allocator<FileChunkInfo>>)>)const;
    virtual void confirmChunkReceived(FileInfo const&, FileChunkInfo const&);
    virtual void uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char>> const&, std::function<void ()(bool)>);
    virtual bool canCancelUpload(FileInfo const&)const;
    virtual void cancelUpload(FileInfo const&);
    virtual void getUploadProgress(FileInfo const&)const;
    virtual void getChunkInfo(FileInfo const&, int)const;

    void ServerFileChunkUploader(PacketSender &, NetworkIdentifier const&);
    void _validateFile(FileInfo const&)const;
};
