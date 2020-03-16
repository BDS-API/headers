#pragma once



class ResourcePackListener {

public:
    virtual ~ResourcePackListener(); // _ZN20ResourcePackListenerD2Ev
    virtual void __fake_function0(); // fake
    virtual void onFullPackStackInvalid(); // _ZN20ResourcePackListener22onFullPackStackInvalidEv
    virtual void onBaseGamePackDownloadComplete(); // _ZN20ResourcePackListener30onBaseGamePackDownloadCompleteEv
    virtual void onLanguageSubpacksChanged(); // _ZN20ResourcePackListener25onLanguageSubpacksChangedEv
    virtual void onResourceManagerDestroyed(ResourcePackManager &); // _ZN20ResourcePackListener26onResourceManagerDestroyedER19ResourcePackManager
    ResourcePackListener(); // _ZN20ResourcePackListenerC2Ev
};
