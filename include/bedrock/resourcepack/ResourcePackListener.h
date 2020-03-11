#pragma once

#include "../pack/ResourcePackManager.h"


class ResourcePackListener {

public:
    virtual ~ResourcePackListener();
    virtual void onFullPackStackInvalid();
    virtual void onBaseGamePackDownloadComplete();
    virtual void onLanguageSubpacksChanged();
    virtual void onResourceManagerDestroyed(ResourcePackManager &);

    ResourcePackListener();
};
