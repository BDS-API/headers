#pragma once

#include <string>
#include "FileChunkInfo.h"
#include "../json/Value.h"
#include <functional>
#include "../core/Path.h"
#include "IFileChunkUploader.h"
#include <memory>
#include "TaskGroup.h"
#include "FileArchiver.h"


class FileUploadManager {

public:
    class MultiPartStreamHelper;

    static long CHUNK_UPLOAD_SIZE;
    static std::string BOUNDARY;

    ~FileUploadManager();
    virtual void getUploadProgress()const;
    void getUploadState()const;
    void uploadChunk(int);
    FileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>);
    void _generateMultiPartHelper();
    void _uploadStream();
    void setUseStream(bool);
    void setContinueOnReception(bool);
    FileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>);
    void update();
    void getFileSize()const;
    void uploadArchivedFile(std::string const&, Core::Path const&);
    void getError()const;
    void setFailed();
    void _resumeUpload();
    void addCallbackQueue(std::function<void (void)>);
    void uploadChunk(FileChunkInfo);
    void _uploadChunk(FileChunkInfo const&);
    void uploadFile(std::string const&, Core::Path const&, bool, Json::Value const&);
    void uploadStream();
    bool canCancelUpload()const;
    void cancelUpload();
    void setUploadAllAtOnce(bool);
    class MultiPartStreamHelper {

    public:
        MultiPartStreamHelper();
        ~MultiPartStreamHelper();
    };
};
