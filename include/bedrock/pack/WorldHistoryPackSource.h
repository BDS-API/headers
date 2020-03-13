#pragma once

#include <string>
#include <functional>
#include "PackSource.h"


class WorldHistoryPackSource : PackSource {

public:
    ~WorldHistoryPackSource(); // _ZN22WorldHistoryPackSourceD2Ev
    virtual void forEachPackConst(std::function<void (Pack const&)>)const; // _ZNK22WorldHistoryPackSource16forEachPackConstESt8functionIFvRK4PackEE
    virtual void forEachPack(std::function<void (Pack &)>); // _ZN22WorldHistoryPackSource11forEachPackESt8functionIFvR4PackEE
    virtual void getPackOrigin()const; // _ZNK22WorldHistoryPackSource13getPackOriginEv
    virtual void getPackType()const; // _ZNK22WorldHistoryPackSource11getPackTypeEv
    virtual void load(PackManifestFactory &, IContentKeyProvider const&); // _ZN22WorldHistoryPackSource4loadER19PackManifestFactoryRK19IContentKeyProvider
//  WorldHistoryPackSource(Core::Path const&, PackType); //TODO: incomplete function definition // _ZN22WorldHistoryPackSourceC2ERKN4Core4PathE8PackType
//  std::string generateHistoryFilePath(Core::Path const&, PackType); //TODO: incomplete function definition // _ZN22WorldHistoryPackSource23generateHistoryFilePathB5cxx11ERKN4Core4PathE8PackType
    void _readWorldHistoryFile(); // _ZN22WorldHistoryPackSource21_readWorldHistoryFileEv
    void _addPackFromHistoryPack(WorldPackHistory const&); // _ZN22WorldHistoryPackSource23_addPackFromHistoryPackERK16WorldPackHistory
    std::string getPathToWorld()const; // _ZNK22WorldHistoryPackSource14getPathToWorldB5cxx11Ev
    void trackNewPackIfNotTracked(WorldPackHistory const&); // _ZN22WorldHistoryPackSource24trackNewPackIfNotTrackedERK16WorldPackHistory
    bool needsSaving()const; // _ZNK22WorldHistoryPackSource11needsSavingEv
    void saveHistoryFile(); // _ZN22WorldHistoryPackSource15saveHistoryFileEv
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&); // _ZN22WorldHistoryPackSource27setSourceUUIDForPackHistoryERK13PackIdVersionRKN3mce4UUIDE
    void _createPackFromHistoryPack(WorldPackHistory const&); // _ZN22WorldHistoryPackSource26_createPackFromHistoryPackERK16WorldPackHistory
};
