#pragma once

#include "../../mce/UUID"
#include "../../unmapped/IContentKeyProvider"
#include "../../core/Path"
#include "../../unmapped/WorldPackHistory"
#include "../../unmapped/PackManifestFactory"
#include "../../unmapped/PackIdVersion"


class WorldHistoryPackSource : PackSource {

public:
    WorldHistoryPackSource::~WorldHistoryPackSource()
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
