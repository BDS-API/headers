#pragma once

#include "./KnownPackInfo.h"
#include "./PackIdVersion.h"
#include "./ResourceLocation.h"
#include "./KnownPackContainer.h"


namespace ResourcePackRepository {

class KnownPackContainer {

public:

    bool hasPack(ResourcePackRepository::KnownPackInfo const&)const;
    void addPack(ResourcePackRepository::KnownPackInfo &&);
    void operator!=(ResourcePackRepository::KnownPackContainer const&)const;
    void getPacks();
    void getPacks()const;
    void getPack(PackIdVersion const&);
    void getPack(ResourceLocation const&);
    void addPack(ResourcePackRepository::KnownPackInfo const&);
    void getPack(PackIdVersion const&)const;
    void getPack(ResourceLocation const&)const;
    void operator==(ResourcePackRepository::KnownPackContainer const&)const;
    KnownPackContainer();
    ~KnownPackContainer();
};

}