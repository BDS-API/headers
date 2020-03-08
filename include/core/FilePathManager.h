#pragma once



using namespace Core;

class FilePathManager {

public:

    FilePathManager(Core::Path const&, bool);
    void setRootPath(Core::Path const&);
    void setPackagePath(Core::Path const&);
    void setDataUrl(Core::Path const&);
    void setExternalFilePath(Core::Path const&);
    void setTemporaryFilePath(Core::Path const&);
    void setCacheFilePath(Core::Path const&);
    void setSettingsPath(Core::Path const&);
};
