#pragma once

class TreatmentPackSource : PackSource {

public:
    virtual TreatmentPackSource::~TreatmentPackSource();
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void getPackOrigin(void)const;
    virtual void getPackType(void)const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    TreatmentPackSource(Core::Path const&, PackType);
    bool isCopyable(void)const;
    void addPack(std::unique_ptr<Pack, std::default_delete<Pack>> &&);
    void removePack(Core::Path const&);
};