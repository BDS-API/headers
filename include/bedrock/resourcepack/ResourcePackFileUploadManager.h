#pragma once

#include "../../unmapped/IFileChunkUploader"
#include "../../json/Value"
#include "../../core/Path"
#include "../../unmapped/FileUploadManager"
#include "../../unmapped/FileArchiver"
#include "../../unmapped/TaskGroup"
#include "../../unmapped/ResourceLocation"


class ResourcePackFileUploadManager : FileUploadManager {

public:
    ResourcePackFileUploadManager::~ResourcePackFileUploadManager()
    virtual void uploadFileToRealmStorage(std::string const&, Core::Path const&, std::string const&);

    ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>);
    ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>);
    void uploadResourcePack(std::string const&, ResourceLocation const&, bool, bool, PackType, bool);
    void _uploadResourcePackFolder(std::string const&, ResourceLocation const&, Core::Path const&, bool, Json::Value const&);
    void _uploadPackToRealmStorage(std::string const&, Core::Path const&, std::string const&);
};
