#pragma once

#include "../../core/Path.h"
#include "../../unmapped/TaskGroup.h"
#include <string>
#include "../../unmapped/FileUploadManager.h"
#include "../../unmapped/FileArchiver.h"
#include "../../json/Value.h"
#include <memory>
#include "../../unmapped/IFileChunkUploader.h"
#include "../../unmapped/ResourceLocation.h"


class ResourcePackFileUploadManager : FileUploadManager {

public:
    ~ResourcePackFileUploadManager();
    virtual void uploadFileToRealmStorage(std::string const&, Core::Path const&, std::string const&);
    void _uploadResourcePackFolder(std::string const&, ResourceLocation const&, Core::Path const&, bool, Json::Value const&);
    ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>);
    void _uploadPackToRealmStorage(std::string const&, Core::Path const&, std::string const&);
    ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>);
//  void uploadResourcePack(std::string const&, ResourceLocation const&, bool, bool, PackType, bool); //TODO: incomplete function definition
};
