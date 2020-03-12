#pragma once

#include "Path.h"


namespace Core {

    class FilePathManager {

    public:
        std::string getUserDataPath()const;
        void setPackagePath(Core::Path const&);
        ~FilePathManager();
        void setRootPath(Core::Path const&);
        std::string getLevelArchivePath()const;
        std::string getCacheFilePath()const;
        std::string getSettingsPath()const;
        void setExternalFilePath(Core::Path const&);
        std::string getResourcePacksPath()const;
        std::string getHomePath()const;
        std::string getWorldsPath()const;
        std::string getDataUrl()const;
        void setCacheFilePath(Core::Path const&);
        void setSettingsPath(Core::Path const&);
        std::string getTemporaryFilePath()const;
        std::string getExternalFilePath()const;
        std::string getPackagePath()const;
        std::string getRootPath()const;
        void setDataUrl(Core::Path const&);
        FilePathManager(Core::Path const&, bool);
        void setTemporaryFilePath(Core::Path const&);
    };
}
