#pragma once

#include "../bedrock/file/access/IFileAccess"


using namespace Core;

class UnzipFile {

public:

    UnzipFile(IFileAccess *, Core::Path const&);
    bool isGood()const;
    void locateFile(char const*, int);
    void goToFirstFile();
    void goToNextFile();
    void openCurrentFileForReading();
    void closeCurrentFile();
    void appendCurrentFileContents(std::string &, unsigned long, std::function<void ()(int, std::string const&)>);
    void getTotalFilesInZip();
};
