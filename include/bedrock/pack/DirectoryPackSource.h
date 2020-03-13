#pragma once

#include <string>
#include <memory>
#include <functional>
#include "PackSource.h"


class DirectoryPackSource : PackSource {

public:
    ~DirectoryPackSource(); // _ZN19DirectoryPackSourceD2Ev
    virtual void forEachPackConst(std::function<void (Pack const&)>)const; // _ZNK19DirectoryPackSource16forEachPackConstESt8functionIFvRK4PackEE
    virtual void forEachPack(std::function<void (Pack &)>); // _ZN19DirectoryPackSource11forEachPackESt8functionIFvR4PackEE
    virtual void getPackOrigin()const; // _ZNK19DirectoryPackSource13getPackOriginEv
    virtual void getPackType()const; // _ZNK19DirectoryPackSource11getPackTypeEv
    virtual void load(PackManifestFactory &, IContentKeyProvider const&); // _ZN19DirectoryPackSource4loadER19PackManifestFactoryRK19IContentKeyProvider
//  DirectoryPackSource(Core::Path const&, PackType, PackOrigin, bool); //TODO: incomplete function definition // _ZN19DirectoryPackSourceC2ERKN4Core4PathE8PackType10PackOriginb
    std::string getPath()const; // _ZNK19DirectoryPackSource7getPathB5cxx11Ev
    bool isCopyable()const; // _ZNK19DirectoryPackSource10isCopyableEv
    void addPack(std::unique_ptr<Pack> &&); // _ZN19DirectoryPackSource7addPackEOSt10unique_ptrI4PackSt14default_deleteIS1_EE
    void removePack(Core::Path const&); // _ZN19DirectoryPackSource10removePackERKN4Core4PathE
    void deleteAllPacksAndReset(); // _ZN19DirectoryPackSource22deleteAllPacksAndResetEv
    void checkAndRemoveIncompletePacks(Core::Path const&); // _ZN19DirectoryPackSource29checkAndRemoveIncompletePacksERKN4Core4PathE
    void _setPath(Core::Path const&); // _ZN19DirectoryPackSource8_setPathERKN4Core4PathE
    void _isDiscovered()const; // _ZNK19DirectoryPackSource13_isDiscoveredEv
};
