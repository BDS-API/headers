#pragma once

#include "../pack/ResourcePackManager.h"


class ResourcePackListener {

public:
    virtual void onBaseGamePackDownloadComplete();
    virtual void onLanguageSubpacksChanged();
    virtual void onResourceManagerDestroyed(ResourcePackManager &);
    ~ResourcePackListener();
    virtual void onFullPackStackInvalid();
    ResourcePackListener();
};
