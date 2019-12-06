#pragma once

class ResourcePackRepository::KnownPackContainer {

public:

    bool hasPack(ResourcePackRepository::KnownPackInfo const&)const;
    void addPack(ResourcePackRepository::KnownPackInfo &&);
    void getPacks(void);
    void getPacks(void)const;
    void getPack(PackIdVersion const&);
    void getPack(ResourceLocation const&);
    void addPack(ResourcePackRepository::KnownPackInfo const&);
    void getPack(PackIdVersion const&)const;
    void getPack(ResourceLocation const&)const;
    void KnownPackContainer(void);
};
