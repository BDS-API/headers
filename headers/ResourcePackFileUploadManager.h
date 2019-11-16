#pragma once

class ResourcePackFileUploadManager : FileUploadManager {

    virtual ~ResourcePackFileUploadManager();
    virtual ~ResourcePackFileUploadManager();
    virtual void getUploadProgress(void)const;
    virtual void uploadFileToRealmStorage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
}
