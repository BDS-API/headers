#pragma once

class RealmsUnknownPackSource : PackSource {

    virtual void RealmsUnknown~RealmsUnknownPackSource();
    virtual void RealmsUnknown~RealmsUnknownPackSource();
    virtual void RealmsUnknownforEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void RealmsUnknownforEachPack(std::function<void ()(Pack &)>);
    virtual void RealmsUnknowngetPackOrigin(void)const;
    virtual void RealmsUnknowngetPackType(void)const;
    virtual void RealmsUnknownload(PackManifestFactory &, IContentKeyProvider const&);
}
