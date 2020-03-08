#pragma once

#include "../../unmapped/Pack"
#include "../../unmapped/IContentKeyProvider"
#include "../../mce/UUID"
#include "../../unmapped/PackManifestFactory"


class RealmsUnknownPackSource : PackSource {

public:
    virtual RealmsUnknownPackSource::~RealmsUnknownPackSource()
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    RealmsUnknownPackSource(PackType, PackOrigin);
    void addPack(std::unique_ptr<Pack, std::default_delete<Pack>> &&);
    void removePack(mce::UUID const&);
    void clearPacks();
};
