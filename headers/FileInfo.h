#pragma once

class FileInfo {

public:

    void FileInfo(Core::Path, int, std::string);
    void valid(void)const;
    void FileInfo(FileInfo&&);
};
