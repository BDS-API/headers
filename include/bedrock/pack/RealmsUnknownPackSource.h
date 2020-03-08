#pragma once

#include "../../mce/UUID"
#include "../../unmapped/IContentKeyProvider"
#include "../../unmapped/PackManifestFactory"
#include "../../unmapped/Pack"


class RealmsUnknownPackSource : PackSource {

public:
    RealmsUnknownPackSource::~RealmsUnknownPackSource()
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
