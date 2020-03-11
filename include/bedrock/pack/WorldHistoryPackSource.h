#pragma once

#include "../../mce/UUID.h"
#include "./PackSource.h"
#include "../../unmapped/WorldPackHistory.h"
#include "../../core/Path.h"
#include "../../unmapped/PackIdVersion.h"
#include "../../unmapped/IContentKeyProvider.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/Pack.h"
#include <functional>
#include <string>


class WorldHistoryPackSource : PackSource {

public:
    virtual ~WorldHistoryPackSource();
//  virtual void forEachPackConst(std::function<void (Pack const&)>)const; //TODO: incomplete function definition
//  virtual void forEachPack(std::function<void (Pack &)>); //TODO: incomplete function definition
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

//  WorldHistoryPackSource(Core::Path const&, PackType); //TODO: incomplete function definition
//  std::string generateHistoryFilePath(Core::Path const&, PackType); //TODO: incomplete function definition
    void _readWorldHistoryFile();
    void _addPackFromHistoryPack(WorldPackHistory const&);
    std::string getPathToWorld()const;
    void trackNewPackIfNotTracked(WorldPackHistory const&);
    bool needsSaving()const;
    void saveHistoryFile();
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&);
    void _createPackFromHistoryPack(WorldPackHistory const&);
};
