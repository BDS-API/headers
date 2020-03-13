#pragma once

#include <vector>


class BaseGamePackSlices {

public:
    class BaseGameVersionPack;

    ~BaseGamePackSlices(); // _ZN18BaseGamePackSlicesD2Ev
    BaseGamePackSlices(); // _ZN18BaseGamePackSlicesC2Ev
    void addFromVersions(std::vector<BaseGameVersion> const&, ResourcePackRepository const&, mce::UUID const&); // _ZN18BaseGamePackSlices15addFromVersionsERKSt6vectorI15BaseGameVersionSaIS1_EERK22ResourcePackRepositoryRKN3mce4UUIDE
    void _add(std::vector<BaseGamePackSlices::BaseGameVersionPack> &, BaseGameVersion const&, ResourcePack &); // _ZN18BaseGamePackSlices4_addERSt6vectorINS_19BaseGameVersionPackESaIS1_EERK15BaseGameVersionR12ResourcePack
    void applyPackSlices(BaseGameVersion const&, ResourcePackRepository const&, ResourcePackStack &)const; // _ZNK18BaseGamePackSlices15applyPackSlicesERK15BaseGameVersionRK22ResourcePackRepositoryR17ResourcePackStack
    void clear(); // _ZN18BaseGamePackSlices5clearEv
    class BaseGameVersionPack {

    public:
        ~BaseGameVersionPack(); // _ZN18BaseGamePackSlices19BaseGameVersionPackD2Ev
        BaseGameVersionPack(BaseGamePackSlices::BaseGameVersionPack &&); // _ZN18BaseGamePackSlices19BaseGameVersionPackC2EOS0_
        BaseGameVersionPack(BaseGamePackSlices::BaseGameVersionPack const&); // _ZN18BaseGamePackSlices19BaseGameVersionPackC2ERKS0_
    };
};
