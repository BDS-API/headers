#pragma once

class ResourcePackListener {

    virtual void ~ResourcePackListener();
    virtual void ~ResourcePackListener();
    virtual void onActiveResourcePacksChanged(ResourcePackManager &);
    virtual void onFullPackStackInvalid(void);
    virtual void onBaseGamePackDownloadComplete(void);
    virtual void onLanguageSubpacksChanged(void);
    virtual void onResourceManagerDestroyed(ResourcePackManager &);
}
