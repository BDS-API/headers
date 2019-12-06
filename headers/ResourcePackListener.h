#pragma once

class ResourcePackListener {

public:
    virtual ~ResourcePackListener();
    virtual void onFullPackStackInvalid(void);
    virtual void onBaseGamePackDownloadComplete(void);
    virtual void onLanguageSubpacksChanged(void);
    virtual void onResourceManagerDestroyed(ResourcePackManager &);

    void ResourcePackListener(void);
};
