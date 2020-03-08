#pragma once

#include "../../unmapped/WorldPackHistory"
#include "../../unmapped/IContentKeyProvider"
#include "../../mce/UUID"
#include "../../unmapped/PackIdVersion"
#include "../../unmapped/PackManifestFactory"
#include "../../core/Path"


class WorldHistoryPackSource : PackSource {

public:
    virtual WorldHistoryPackSource::~WorldHistoryPackSource()
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    WorldHistoryPackSource(Core::Path const&, PackType);
    void _readWorldHistoryFile();
    void _addPackFromHistoryPack(WorldPackHistory const&);
    void trackNewPackIfNotTracked(WorldPackHistory const&);
    bool needsSaving()const;
    void saveHistoryFile();
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&);
    void _createPackFromHistoryPack(WorldPackHistory const&);
};
