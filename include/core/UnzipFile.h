#pragma once

#include <functional>
#include "./Path.h"
#include "../bedrock/file/access/IFileAccess.h"
#include <string>


namespace Core {

class UnzipFile {

public:

    UnzipFile(IFileAccess *, Core::Path const&);
    ~UnzipFile();
    bool isGood()const;
    void locateFile(char const*, int);
    void goToFirstFile();
    void goToNextFile();
    std::string getCurrentFileName()const;
    void openCurrentFileForReading();
    void closeCurrentFile();
//  void appendCurrentFileContents(std::string &, unsigned long, std::function<void (int, std::string const&)>); //TODO: incomplete function definition
    void getTotalFilesInZip();
};

}