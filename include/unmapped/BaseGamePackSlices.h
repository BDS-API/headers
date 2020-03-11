#pragma once

#include "../mce/UUID.h"
#include "../bedrock/resourcepack/ResourcePackRepository.h"
#include "../bedrock/resourcepack/ResourcePackStack.h"
#include "./BaseGameVersionPack.h"
#include <memory>
#include "../bedrock/resourcepack/ResourcePack.h"
#include <vector>
#include "./BaseGameVersion.h"


class BaseGamePackSlices {

public:

    ~BaseGamePackSlices();
    BaseGamePackSlices();
    void addFromVersions(std::vector<BaseGameVersion, std::allocator<BaseGameVersion>> const&, ResourcePackRepository const&, mce::UUID const&);
    void _add(std::vector<BaseGamePackSlices::BaseGameVersionPack, std::allocator<BaseGamePackSlices::BaseGameVersionPack>> &, BaseGameVersion const&, ResourcePack &);
    void applyPackSlices(BaseGameVersion const&, ResourcePackRepository const&, ResourcePackStack &)const;
    void clear();
};
