#pragma once

class Core::UnzipFile {

public:

    void UnzipFile(IFileAccess *, Core::Path const&);
    bool isGood(void)const;
    void locateFile(char const*, int);
    void goToFirstFile(void);
    void goToNextFile(void);
    void openCurrentFileForReading(void);
    void closeCurrentFile(void);
    void appendCurrentFileContents(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, unsigned long, std::function<void ()(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)>);
    void getTotalFilesInZip(void);
};
