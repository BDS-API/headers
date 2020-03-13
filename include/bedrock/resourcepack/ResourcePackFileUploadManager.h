#pragma once

#include <string>
#include <memory>
#include "../../unmapped/FileUploadManager.h"


class ResourcePackFileUploadManager : FileUploadManager {

public:
    ~ResourcePackFileUploadManager(); // _ZN29ResourcePackFileUploadManagerD2Ev
    virtual void uploadFileToRealmStorage(std::string const&, Core::Path const&, std::string const&); // _ZN29ResourcePackFileUploadManager24uploadFileToRealmStorageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Core4PathES7_
    ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>); // _ZN29ResourcePackFileUploadManagerC2ER9TaskGroupSt10shared_ptrI18IFileChunkUploaderE
    ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>); // _ZN29ResourcePackFileUploadManagerC2ER9TaskGroupSt10shared_ptrI18IFileChunkUploaderESt8weak_ptrI12FileArchiverE
//  void uploadResourcePack(std::string const&, ResourceLocation const&, bool, bool, PackType, bool); //TODO: incomplete function definition // _ZN29ResourcePackFileUploadManager18uploadResourcePackERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK16ResourceLocationbb8PackTypeb
    void _uploadResourcePackFolder(std::string const&, ResourceLocation const&, Core::Path const&, bool, Json::Value const&); // _ZN29ResourcePackFileUploadManager25_uploadResourcePackFolderERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK16ResourceLocationRKN4Core4PathEbRKN4Json5ValueE
    void _uploadPackToRealmStorage(std::string const&, Core::Path const&, std::string const&); // _ZN29ResourcePackFileUploadManager25_uploadPackToRealmStorageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Core4PathES7_
};
