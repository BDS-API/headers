#pragma once

#include <memory>
#include <string>
#include "../../unmapped/FileUploadManager.h"


class ResourcePackFileUploadManager : FileUploadManager {

public:
    ~ResourcePackFileUploadManager();
    virtual void uploadFileToRealmStorage(std::string const&, Core::Path const&, std::string const&);
//  void uploadResourcePack(std::string const&, ResourceLocation const&, bool, bool, PackType, bool); //TODO: incomplete function definition
    ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>);
    void _uploadPackToRealmStorage(std::string const&, Core::Path const&, std::string const&);
    ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>);
    void _uploadResourcePackFolder(std::string const&, ResourceLocation const&, Core::Path const&, bool, Json::Value const&);
};
