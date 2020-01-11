#pragma once

class WorldHistoryPackSource : PackSource {

public:
    virtual WorldHistoryPackSource::~WorldHistoryPackSource();
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void getPackOrigin(void)const;
    virtual void getPackType(void)const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    WorldHistoryPackSource(Core::Path const&, PackType);
    void _readWorldHistoryFile(void);
    void _addPackFromHistoryPack(WorldPackHistory const&);
    void trackNewPackIfNotTracked(WorldPackHistory const&);
    void needsSaving(void)const;
    void saveHistoryFile(void);
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&);
    void _createPackFromHistoryPack(WorldPackHistory const&);
};
