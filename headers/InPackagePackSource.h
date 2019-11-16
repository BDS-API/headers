#pragma once

class InPackagePackSource : PackSource {

    virtual void InPackagePackSource::~InPackagePackSource();
    virtual void InPackagePackSource::~InPackagePackSource();
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void getPackOrigin(void)const;
    virtual void getPackType(void)const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
}
