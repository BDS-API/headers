#pragma once

#include <string>
#include <functional>


namespace Core {

    class UnzipFile {

    public:
        void goToFirstFile();
        UnzipFile(IFileAccess *, Core::Path const&);
        void closeCurrentFile();
        std::string getCurrentFileName()const;
        void appendCurrentFileContents(std::string &, unsigned long, std::function<void (int, std::string const&)>);
        void locateFile(char const*, int);
        bool isGood()const;
        void getTotalFilesInZip();
        void openCurrentFileForReading();
        ~UnzipFile();
        void goToNextFile();
    };
}
