#pragma once

class DirectoryPackSource : PackSource {

public:
    virtual DirectoryPackSource::~DirectoryPackSource();
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void getPackOrigin(void)const;
    virtual void getPackType(void)const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    DirectoryPackSource(Core::Path const&, PackType, PackOrigin, bool);
    bool isCopyable(void)const;
    void addPack(std::unique_ptr<Pack, std::default_delete<Pack>> &&);
    void removePack(Core::Path const&);
    void deleteAllPacksAndReset(void);
    void checkAndRemoveIncompletePacks(Core::Path const&);
    void _setPath(Core::Path const&);
    void _isDiscovered(void)const;
};
