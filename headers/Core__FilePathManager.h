#pragma once

class Core::FilePathManager {

public:

    void FilePathManager(Core::Path const&, bool);
    void setRootPath(Core::Path const&);
    void setPackagePath(Core::Path const&);
    void setDataUrl(Core::Path const&);
    void setExternalFilePath(Core::Path const&);
    void setTemporaryFilePath(Core::Path const&);
    void setCacheFilePath(Core::Path const&);
    void setSettingsPath(Core::Path const&);
};
