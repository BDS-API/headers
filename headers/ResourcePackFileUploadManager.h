#pragma once

class ResourcePackFileUploadManager : FileUploadManager {

public:
    virtual ~ResourcePackFileUploadManager();
    virtual void uploadFileToRealmStorage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);

    void ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>);
    void ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>);
    void uploadResourcePack(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ResourceLocation const&, bool, bool, PackType, bool);
    void _uploadResourcePackFolder(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ResourceLocation const&, Core::Path const&, bool, Json::Value const&);
    void _uploadPackToRealmStorage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
