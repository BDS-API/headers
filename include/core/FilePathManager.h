#pragma once

#include "./Path.h"
#include <string>


namespace Core {

class FilePathManager {

public:

    FilePathManager(Core::Path const&, bool);
    void setRootPath(Core::Path const&);
    ~FilePathManager();
    std::string getRootPath()const;
    void setPackagePath(Core::Path const&);
    void setDataUrl(Core::Path const&);
    void setExternalFilePath(Core::Path const&);
    void setTemporaryFilePath(Core::Path const&);
    void setCacheFilePath(Core::Path const&);
    void setSettingsPath(Core::Path const&);
    std::string getHomePath()const;
    std::string getSettingsPath()const;
    std::string getWorldsPath()const;
    std::string getResourcePacksPath()const;
    std::string getLevelArchivePath()const;
    std::string getPackagePath()const;
    std::string getDataUrl()const;
    std::string getExternalFilePath()const;
    std::string getUserDataPath()const;
    std::string getTemporaryFilePath()const;
    std::string getCacheFilePath()const;
};

}