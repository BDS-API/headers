#pragma once

class InPackagePackSource : PackSource {

    virtual void InPackage~InPackagePackSource();
    virtual void InPackage~InPackagePackSource();
    virtual void InPackageforEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void InPackageforEachPack(std::function<void ()(Pack &)>);
    virtual void InPackagegetPackOrigin(void)const;
    virtual void InPackagegetPackType(void)const;
    virtual void InPackageload(PackManifestFactory &, IContentKeyProvider const&);
}
