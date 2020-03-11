#pragma once

#include "../../unmapped/FileArchiver.h"
#include "../../unmapped/FileUploadManager.h"
#include <string>
#include "../../unmapped/IFileChunkUploader.h"
#include "../../core/Path.h"
#include "../../unmapped/TaskGroup.h"
#include <memory>
#include "../../unmapped/ResourceLocation.h"
#include "../../json/Value.h"


class ResourcePackFileUploadManager : FileUploadManager {

public:
    virtual ~ResourcePackFileUploadManager();
    virtual void uploadFileToRealmStorage(std::string const&, Core::Path const&, std::string const&);

    ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>);
    ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>);
//  void uploadResourcePack(std::string const&, ResourceLocation const&, bool, bool, PackType, bool); //TODO: incomplete function definition
    void _uploadResourcePackFolder(std::string const&, ResourceLocation const&, Core::Path const&, bool, Json::Value const&);
    void _uploadPackToRealmStorage(std::string const&, Core::Path const&, std::string const&);
};
