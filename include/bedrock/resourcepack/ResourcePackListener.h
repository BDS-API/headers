#pragma once



class ResourcePackListener {

public:
    virtual void onBaseGamePackDownloadComplete();
    ~ResourcePackListener();
    virtual void onFullPackStackInvalid();
    virtual void onLanguageSubpacksChanged();
    virtual void onResourceManagerDestroyed(ResourcePackManager &);
    ResourcePackListener();
};
