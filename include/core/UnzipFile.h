#pragma once

#include "../bedrock/file/access/IFileAccess.h"
#include <functional>
#include <string>
#include "Path.h"


namespace Core {

    class UnzipFile {

    public:
        UnzipFile(IFileAccess *, Core::Path const&);
        void locateFile(char const*, int);
        void closeCurrentFile();
        void getTotalFilesInZip();
        void openCurrentFileForReading();
        bool isGood()const;
        void goToFirstFile();
        std::string getCurrentFileName()const;
        void goToNextFile();
        ~UnzipFile();
        void appendCurrentFileContents(std::string &, unsigned long, std::function<void (int, std::string const&)>);
    };
}
