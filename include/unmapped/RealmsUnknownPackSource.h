#pragma once

class RealmsUnknownPackSource : PackSource {

public:
    virtual RealmsUnknownPackSource::~RealmsUnknownPackSource();
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void getPackOrigin(void)const;
    virtual void getPackType(void)const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    RealmsUnknownPackSource(PackType, PackOrigin);
    void addPack(std::unique_ptr<Pack, std::default_delete<Pack>> &&);
    void removePack(mce::UUID const&);
    void clearPacks(void);
};
