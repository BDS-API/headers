#pragma once

class IFileChunkUploader {

public:
    virtual ~IFileChunkUploader();
    virtual void update(void);
    virtual void getServerMissingChunks(FileInfo const&, std::function<void ()(std::vector<FileChunkInfo, std::allocator<FileChunkInfo>>)>)const;
    virtual void confirmChunkReceived(FileInfo const&, FileChunkInfo const&);
    virtual void uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char>> const&, std::function<void ()(bool)>);
    virtual void uploadStream(FileInfo const&, unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<bool ()(unsigned long &, std::vector<unsigned char, std::allocator<unsigned char>> &)>, std::function<void ()(IFileChunkUploader::UploadStreamResult)>);
    virtual void getChunkInfo(FileInfo const&, int)const;

    void IFileChunkUploader(void);
};
