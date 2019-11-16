#pragma once

class CompositePackSource : PackSource {

    virtual void Composite~CompositePackSource();
    virtual void Composite~CompositePackSource();
    virtual void CompositeforEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void CompositeforEachPack(std::function<void ()(Pack &)>);
    virtual void getPackOrigin(void)const;
    virtual void getPackType(void)const;
    virtual void Compositeload(PackManifestFactory &, IContentKeyProvider const&);
}
