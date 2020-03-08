#pragma once

#include "../../unmapped/IContentKeyProvider"
#include "../../unmapped/IInPackagePacks"
#include "../../unmapped/PackManifestFactory"


class InPackagePackSource : PackSource {

public:
    virtual InPackagePackSource::~InPackagePackSource()
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    InPackagePackSource(std::shared_ptr<IInPackagePacks> const&, PackType);
};
