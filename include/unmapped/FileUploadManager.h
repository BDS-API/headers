#pragma once

#include "./IFileChunkUploader.h"
#include "../core/Path.h"
#include "../json/Value.h"
#include <memory>
#include "./FileArchiver.h"
#include "./FileChunkInfo.h"
#include "./TaskGroup.h"
#include <functional>
#include <string>


class FileUploadManager {

public:
    static long CHUNK_UPLOAD_SIZE;
    static std::string BOUNDARY;

    virtual ~FileUploadManager();
    virtual void getUploadProgress()const;

    FileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>);
    FileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>);
    void update();
    void uploadArchivedFile(std::string const&, Core::Path const&);
    void uploadFile(std::string const&, Core::Path const&, bool, Json::Value const&);
    void uploadChunk(int);
    void _uploadChunk(FileChunkInfo const&);
    void uploadChunk(FileChunkInfo);
    void uploadStream();
    void _uploadStream();
    bool canCancelUpload()const;
    void cancelUpload();
    void getUploadState()const;
    void getError()const;
    void getFileSize()const;
    void setUploadAllAtOnce(bool);
    void setContinueOnReception(bool);
    void setUseStream(bool);
//  void addCallbackQueue(std::function<void (void)>); //TODO: incomplete function definition
    void setFailed();
    void _resumeUpload();
    void _generateMultiPartHelper();
};
