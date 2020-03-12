#pragma once

#include <vector>


class BaseGamePackSlices {

public:
    class BaseGameVersionPack;

    void clear();
    void applyPackSlices(BaseGameVersion const&, ResourcePackRepository const&, ResourcePackStack &)const;
    BaseGamePackSlices();
    void addFromVersions(std::vector<BaseGameVersion> const&, ResourcePackRepository const&, mce::UUID const&);
    ~BaseGamePackSlices();
    void _add(std::vector<BaseGamePackSlices::BaseGameVersionPack> &, BaseGameVersion const&, ResourcePack &);
    class BaseGameVersionPack {

    public:
        ~BaseGameVersionPack();
        BaseGameVersionPack(BaseGamePackSlices::BaseGameVersionPack &&);
        BaseGameVersionPack(BaseGamePackSlices::BaseGameVersionPack const&);
    };
};
