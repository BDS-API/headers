#pragma once

#include <memory>
#include <string>
#include "FileChunkInfo.h"
#include <functional>


class FileUploadManager {

public:
    class MultiPartStreamHelper;

    static long CHUNK_UPLOAD_SIZE;
    static std::string BOUNDARY;

    ~FileUploadManager();
    virtual void getUploadProgress()const;
    void uploadArchivedFile(std::string const&, Core::Path const&);
    FileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>);
    void update();
    void getFileSize()const;
    bool canCancelUpload()const;
    void uploadChunk(int);
    void setUseStream(bool);
    void addCallbackQueue(std::function<void (void)>);
    void uploadFile(std::string const&, Core::Path const&, bool, Json::Value const&);
    void setContinueOnReception(bool);
    void _uploadChunk(FileChunkInfo const&);
    void getError()const;
    void cancelUpload();
    void _generateMultiPartHelper();
    void _uploadStream();
    void setUploadAllAtOnce(bool);
    void _resumeUpload();
    FileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>);
    void setFailed();
    void uploadChunk(FileChunkInfo);
    void uploadStream();
    void getUploadState()const;
    class MultiPartStreamHelper {

    public:
        MultiPartStreamHelper();
        ~MultiPartStreamHelper();
    };
};
