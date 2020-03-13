#pragma once

#include <memory>
#include <functional>
#include "PackSource.h"


class RealmsUnknownPackSource : PackSource {

public:
    ~RealmsUnknownPackSource(); // _ZN23RealmsUnknownPackSourceD2Ev
    virtual void forEachPackConst(std::function<void (Pack const&)>)const; // _ZNK23RealmsUnknownPackSource16forEachPackConstESt8functionIFvRK4PackEE
    virtual void forEachPack(std::function<void (Pack &)>); // _ZN23RealmsUnknownPackSource11forEachPackESt8functionIFvR4PackEE
    virtual void getPackOrigin()const; // _ZNK23RealmsUnknownPackSource13getPackOriginEv
    virtual void getPackType()const; // _ZNK23RealmsUnknownPackSource11getPackTypeEv
    virtual void load(PackManifestFactory &, IContentKeyProvider const&); // _ZN23RealmsUnknownPackSource4loadER19PackManifestFactoryRK19IContentKeyProvider
//  RealmsUnknownPackSource(PackType, PackOrigin); //TODO: incomplete function definition // _ZN23RealmsUnknownPackSourceC2E8PackType10PackOrigin
    void addPack(std::unique_ptr<Pack> &&); // _ZN23RealmsUnknownPackSource7addPackEOSt10unique_ptrI4PackSt14default_deleteIS1_EE
    void removePack(mce::UUID const&); // _ZN23RealmsUnknownPackSource10removePackERKN3mce4UUIDE
    void clearPacks(); // _ZN23RealmsUnknownPackSource10clearPacksEv
};
