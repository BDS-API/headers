#pragma once

class FileUploadManager {

public:
    static long CHUNK_UPLOAD_SIZE;
    static long BOUNDARY[abi:cxx11];

    virtual ~FileUploadManager();
    virtual void getUploadProgress(void)const;

    void FileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>);
    void FileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>);
    void update(void);
    void uploadArchivedFile(std::string const&, Core::Path const&);
    void uploadFile(std::string const&, Core::Path const&, bool, Json::Value const&);
    void uploadChunk(int);
    void _uploadChunk(FileChunkInfo const&);
    void uploadChunk(FileChunkInfo);
    void uploadStream(void);
    void _uploadStream(void);
    bool canCancelUpload(void)const;
    void cancelUpload(void);
    void getUploadState(void)const;
    void getError(void)const;
    void getFileSize(void)const;
    void setUploadAllAtOnce(bool);
    void setContinueOnReception(bool);
    void setUseStream(bool);
    void addCallbackQueue(std::function<void ()(void)>);
    void setFailed(void);
    void _resumeUpload(void);
    void _generateMultiPartHelper(void);
};
