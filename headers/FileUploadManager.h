#pragma once

class FileUploadManager {

    virtual ~FileUploadManager();
    virtual ~FileUploadManager();
    virtual void getUploadProgress(void)const;
    virtual void uploadFileToRealmStorage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
}
