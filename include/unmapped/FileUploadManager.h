#pragma once

#include <string>
#include <memory>
#include "FileChunkInfo.h"
#include <functional>


class FileUploadManager {

public:
    class MultiPartStreamHelper;

    static long CHUNK_UPLOAD_SIZE;
    static std::string BOUNDARY;

    ~FileUploadManager(); // _ZN17FileUploadManagerD2Ev
    virtual void getUploadProgress()const; // _ZNK17FileUploadManager17getUploadProgressEv
    FileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>); // _ZN17FileUploadManagerC2ER9TaskGroupSt10shared_ptrI18IFileChunkUploaderE
    FileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>); // _ZN17FileUploadManagerC2ER9TaskGroupSt10shared_ptrI18IFileChunkUploaderESt8weak_ptrI12FileArchiverE
    void update(); // _ZN17FileUploadManager6updateEv
    void uploadArchivedFile(std::string const&, Core::Path const&); // _ZN17FileUploadManager18uploadArchivedFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Core4PathE
    void uploadFile(std::string const&, Core::Path const&, bool, Json::Value const&); // _ZN17FileUploadManager10uploadFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Core4PathEbRKN4Json5ValueE
    void uploadChunk(int); // _ZN17FileUploadManager11uploadChunkEi
    void _uploadChunk(FileChunkInfo const&); // _ZN17FileUploadManager12_uploadChunkERK13FileChunkInfo
    void uploadChunk(FileChunkInfo); // _ZN17FileUploadManager11uploadChunkE13FileChunkInfo
    void uploadStream(); // _ZN17FileUploadManager12uploadStreamEv
    void _uploadStream(); // _ZN17FileUploadManager13_uploadStreamEv
    bool canCancelUpload()const; // _ZNK17FileUploadManager15canCancelUploadEv
    void cancelUpload(); // _ZN17FileUploadManager12cancelUploadEv
    void getUploadState()const; // _ZNK17FileUploadManager14getUploadStateEv
    void getError()const; // _ZNK17FileUploadManager8getErrorEv
    void getFileSize()const; // _ZNK17FileUploadManager11getFileSizeEv
    void setUploadAllAtOnce(bool); // _ZN17FileUploadManager18setUploadAllAtOnceEb
    void setContinueOnReception(bool); // _ZN17FileUploadManager22setContinueOnReceptionEb
    void setUseStream(bool); // _ZN17FileUploadManager12setUseStreamEb
    void addCallbackQueue(std::function<void (void)>); // _ZN17FileUploadManager16addCallbackQueueESt8functionIFvvEE
    void setFailed(); // _ZN17FileUploadManager9setFailedEv
    void _resumeUpload(); // _ZN17FileUploadManager13_resumeUploadEv
    void _generateMultiPartHelper(); // _ZN17FileUploadManager24_generateMultiPartHelperEv
    class MultiPartStreamHelper {

    public:
        MultiPartStreamHelper(); // _ZN17FileUploadManager21MultiPartStreamHelperC2Ev
        ~MultiPartStreamHelper(); // _ZN17FileUploadManager21MultiPartStreamHelperD2Ev
    };
};
