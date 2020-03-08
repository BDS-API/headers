#pragma once

#include "../pack/ResourcePackManager"


class ResourcePackListener {

public:
    ResourcePackListener::~ResourcePackListener()
    virtual void onFullPackStackInvalid();
    virtual void onBaseGamePackDownloadComplete();
    virtual void onLanguageSubpacksChanged();
    virtual void onResourceManagerDestroyed(ResourcePackManager &);

    ResourcePackListener(void);
};
