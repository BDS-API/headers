#pragma once

#include "../../unmapped/IContentKeyProvider"
#include "../../core/Path"
#include "../../unmapped/PackManifestFactory"
#include "../../unmapped/Pack"


class TreatmentPackSource : PackSource {

public:
    TreatmentPackSource::~TreatmentPackSource()
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    TreatmentPackSource(Core::Path const&, PackType);
    bool isCopyable()const;
    void addPack(std::unique_ptr<Pack, std::default_delete<Pack>> &&);
    void removePack(Core::Path const&);
};
