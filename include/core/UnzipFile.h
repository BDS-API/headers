#pragma once

#include <string>
#include <functional>


namespace Core {

    class UnzipFile {

    public:
        UnzipFile(IFileAccess *, Core::Path const&); // _ZN4Core9UnzipFileC2EP11IFileAccessRKNS_4PathE
        ~UnzipFile(); // _ZN4Core9UnzipFileD2Ev
        bool isGood()const; // _ZNK4Core9UnzipFile6isGoodEv
        void locateFile(char const*, int); // _ZN4Core9UnzipFile10locateFileEPKci
        void goToFirstFile(); // _ZN4Core9UnzipFile13goToFirstFileEv
        void goToNextFile(); // _ZN4Core9UnzipFile12goToNextFileEv
        std::string getCurrentFileName()const; // _ZNK4Core9UnzipFile18getCurrentFileNameB5cxx11Ev
        void openCurrentFileForReading(); // _ZN4Core9UnzipFile25openCurrentFileForReadingEv
        void closeCurrentFile(); // _ZN4Core9UnzipFile16closeCurrentFileEv
        void appendCurrentFileContents(std::string &, unsigned long, std::function<void (int, std::string const&)>); // _ZN4Core9UnzipFile25appendCurrentFileContentsERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmSt8functionIFviRKS6_EE
        void getTotalFilesInZip(); // _ZN4Core9UnzipFile18getTotalFilesInZipEv
    };
}
