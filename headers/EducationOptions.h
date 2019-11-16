#pragma once

class EducationOptions : ResourcePackListener {

    virtual void EducationOptions::~EducationOptions();
    virtual void EducationOptions::~EducationOptions();
    virtual void onActiveResourcePacksChanged(ResourcePackManager &);
    virtual void onFullPackStackInvalid(void);
    virtual void onBaseGamePackDownloadComplete(void);
    virtual void onLanguageSubpacksChanged(void);
    virtual void onResourceManagerDestroyed(ResourcePackManager &);
}
