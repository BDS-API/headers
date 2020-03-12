#pragma once

#include "../../core/Path.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../mce/UUID.h"
#include "../../unmapped/IContentKeyProvider.h"
#include <functional>
#include "../../unmapped/WorldPackHistory.h"
#include "../../unmapped/Pack.h"
#include "../../unmapped/PackIdVersion.h"
#include "PackSource.h"


class WorldHistoryPackSource : PackSource {

public:
    virtual void getPackType()const;
    virtual void forEachPack(std::function<void (Pack &)>);
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void getPackOrigin()const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    ~WorldHistoryPackSource();
    void _createPackFromHistoryPack(WorldPackHistory const&);
    std::string getPathToWorld()const;
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&);
//  std::string generateHistoryFilePath(Core::Path const&, PackType); //TODO: incomplete function definition
    void _addPackFromHistoryPack(WorldPackHistory const&);
//  WorldHistoryPackSource(Core::Path const&, PackType); //TODO: incomplete function definition
    bool needsSaving()const;
    void _readWorldHistoryFile();
    void trackNewPackIfNotTracked(WorldPackHistory const&);
    void saveHistoryFile();
};
