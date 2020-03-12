#pragma once

#include "../bedrock/resourcepack/ResourcePack.h"
#include "../bedrock/resourcepack/ResourcePackRepository.h"
#include <vector>
#include "BaseGameVersion.h"
#include "../mce/UUID.h"
#include "../bedrock/resourcepack/ResourcePackStack.h"


class BaseGamePackSlices {

public:
    class BaseGameVersionPack;

    ~BaseGamePackSlices();
    void addFromVersions(std::vector<BaseGameVersion> const&, ResourcePackRepository const&, mce::UUID const&);
    void clear();
    void _add(std::vector<BaseGamePackSlices::BaseGameVersionPack> &, BaseGameVersion const&, ResourcePack &);
    BaseGamePackSlices();
    void applyPackSlices(BaseGameVersion const&, ResourcePackRepository const&, ResourcePackStack &)const;
    class BaseGameVersionPack {

    public:
        BaseGameVersionPack(BaseGamePackSlices::BaseGameVersionPack &&);
        ~BaseGameVersionPack();
        BaseGameVersionPack(BaseGamePackSlices::BaseGameVersionPack const&);
    };
};
