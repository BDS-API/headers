#pragma once

#include <string>
#include "PackSource.h"
#include <functional>


class WorldHistoryPackSource : PackSource {

public:
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void getPackOrigin()const;
    virtual void forEachPack(std::function<void (Pack &)>);
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    ~WorldHistoryPackSource();
    virtual void getPackType()const;
    void _readWorldHistoryFile();
    void saveHistoryFile();
    void trackNewPackIfNotTracked(WorldPackHistory const&);
    std::string getPathToWorld()const;
    void _addPackFromHistoryPack(WorldPackHistory const&);
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&);
    bool needsSaving()const;
//  WorldHistoryPackSource(Core::Path const&, PackType); //TODO: incomplete function definition
    void _createPackFromHistoryPack(WorldPackHistory const&);
//  std::string generateHistoryFilePath(Core::Path const&, PackType); //TODO: incomplete function definition
};
