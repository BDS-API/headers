#pragma once

class FileInfo {

public:

    void FileInfo(Core::Path, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void valid(void)const;
    void FileInfo(FileInfo&&);
};
