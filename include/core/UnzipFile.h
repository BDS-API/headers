#pragma once

#include "../bedrock/file/access/IFileAccess"


using namespace Core;

class UnzipFile {

public:

    UnzipFile(IFileAccess *, Core::Path const&);
    bool isGood(void)const;
    void locateFile(char const*, int);
    void goToFirstFile(void);
    void goToNextFile(void);
    void openCurrentFileForReading(void);
    void closeCurrentFile(void);
    void appendCurrentFileContents(std::string &, unsigned long, std::function<void ()(int, std::string const&)>);
    void getTotalFilesInZip(void);
};
