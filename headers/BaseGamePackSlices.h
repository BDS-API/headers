#pragma once

class BaseGamePackSlices {

public:

    void BaseGamePackSlices(void);
    void addFromVersions(std::vector<BaseGameVersion, std::allocator<BaseGameVersion>> const&, ResourcePackRepository const&, mce::UUID const&);
    void _add(std::vector<BaseGamePackSlices::BaseGameVersionPack, std::allocator<BaseGamePackSlices::BaseGameVersionPack>> &, BaseGameVersion const&, ResourcePack &);
    void applyPackSlices(BaseGameVersion const&, ResourcePackRepository const&, ResourcePackStack &)const;
    void clear(void);
};
