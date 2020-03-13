#pragma once

#include <string>


namespace Core {

    class FilePathManager {

    public:
        FilePathManager(Core::Path const&, bool); // _ZN4Core15FilePathManagerC2ERKNS_4PathEb
        void setRootPath(Core::Path const&); // _ZN4Core15FilePathManager11setRootPathERKNS_4PathE
        ~FilePathManager(); // _ZN4Core15FilePathManagerD2Ev
        std::string getRootPath()const; // _ZNK4Core15FilePathManager11getRootPathB5cxx11Ev
        void setPackagePath(Core::Path const&); // _ZN4Core15FilePathManager14setPackagePathERKNS_4PathE
        void setDataUrl(Core::Path const&); // _ZN4Core15FilePathManager10setDataUrlERKNS_4PathE
        void setExternalFilePath(Core::Path const&); // _ZN4Core15FilePathManager19setExternalFilePathERKNS_4PathE
        void setTemporaryFilePath(Core::Path const&); // _ZN4Core15FilePathManager20setTemporaryFilePathERKNS_4PathE
        void setCacheFilePath(Core::Path const&); // _ZN4Core15FilePathManager16setCacheFilePathERKNS_4PathE
        void setSettingsPath(Core::Path const&); // _ZN4Core15FilePathManager15setSettingsPathERKNS_4PathE
        std::string getHomePath()const; // _ZNK4Core15FilePathManager11getHomePathB5cxx11Ev
        std::string getSettingsPath()const; // _ZNK4Core15FilePathManager15getSettingsPathB5cxx11Ev
        std::string getWorldsPath()const; // _ZNK4Core15FilePathManager13getWorldsPathB5cxx11Ev
        std::string getResourcePacksPath()const; // _ZNK4Core15FilePathManager20getResourcePacksPathB5cxx11Ev
        std::string getLevelArchivePath()const; // _ZNK4Core15FilePathManager19getLevelArchivePathB5cxx11Ev
        std::string getPackagePath()const; // _ZNK4Core15FilePathManager14getPackagePathB5cxx11Ev
        std::string getDataUrl()const; // _ZNK4Core15FilePathManager10getDataUrlB5cxx11Ev
        std::string getExternalFilePath()const; // _ZNK4Core15FilePathManager19getExternalFilePathB5cxx11Ev
        std::string getUserDataPath()const; // _ZNK4Core15FilePathManager15getUserDataPathB5cxx11Ev
        std::string getTemporaryFilePath()const; // _ZNK4Core15FilePathManager20getTemporaryFilePathB5cxx11Ev
        std::string getCacheFilePath()const; // _ZNK4Core15FilePathManager16getCacheFilePathB5cxx11Ev
    };
}
