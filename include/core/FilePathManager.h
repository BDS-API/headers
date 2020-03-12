#pragma once

#include <string>


namespace Core {

    class FilePathManager {

    public:
        std::string getCacheFilePath()const;
        void setTemporaryFilePath(Core::Path const&);
        std::string getTemporaryFilePath()const;
        std::string getRootPath()const;
        void setSettingsPath(Core::Path const&);
        void setRootPath(Core::Path const&);
        std::string getPackagePath()const;
        void setPackagePath(Core::Path const&);
        std::string getResourcePacksPath()const;
        void setDataUrl(Core::Path const&);
        std::string getExternalFilePath()const;
        std::string getWorldsPath()const;
        std::string getUserDataPath()const;
        void setCacheFilePath(Core::Path const&);
        std::string getLevelArchivePath()const;
        ~FilePathManager();
        void setExternalFilePath(Core::Path const&);
        std::string getHomePath()const;
        std::string getSettingsPath()const;
        std::string getDataUrl()const;
        FilePathManager(Core::Path const&, bool);
    };
}
